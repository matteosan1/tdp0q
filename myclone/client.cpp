#include "client.h"
#include "messages.h"
#include "utility.h"

#include <QDebug>
#include <QByteArray>

ClientReactor::ClientReactor(zmqpp::socket* snapshotSocket,
                             zmqpp::socket* subscriberSocket,
                             QObject* parent) :
    QObject(parent),
    m_snapshot(snapshotSocket),
    m_subscriber(subscriberSocket)
{
    m_reactor = new reactor();
    m_thread = new QThread();
    moveToThread(m_thread);
    QObject::connect(m_thread, SIGNAL(started()), this, SLOT(mainLoop()));

    m_thread->start();
}

void ClientReactor::mainLoop()
{
    auto snapshotListener = [&]() {
        zmqpp::message msg;
        m_snapshot->receive(msg);
        //std::string t, p;
        //msg >> t >> p;
        QByteArray topic = fromMessage(msg.get(0));
        QByteArray payload = fromMessage(msg.get(1));

        if (topic == END_SNAPSHOT) {
            emit snapshotCompleted();
        }
        else {
            emit snapshotMessage(topic, payload);
        }
    };

    auto subscriberListener = [&]() {
        qDebug() << "publisher arrivato";
        zmqpp::message msg;
        m_subscriber->receive(msg);

        QByteArray topic = QByteArray::fromStdString(msg.get(0));
        QByteArray sender = QByteArray::fromStdString(msg.get(1));
        QByteArray payload = QByteArray::fromStdString(msg.get(2));
        qDebug() << topic;
        emit messageReceived(topic, payload, sender);
    };

    m_reactor->add(*m_snapshot, snapshotListener);
    m_reactor->add(*m_subscriber, subscriberListener);

    while (m_reactor->poll())
    {}
}

Client::Client(QObject* parent) :
    QObject(parent),
    m_uuid(QUuid("{329c5565-6014-413a-8201-407cc6ac910f}")),
    m_running(true)
{
    m_context = new context();

    m_subscriber = new socket(*m_context, socket_type::subscribe);
    m_snapshot = new socket(*m_context, socket_type::dealer);
    m_collector = new socket(*m_context, socket_type::push);

    qDebug() << "Subscribed topics:";
    //qDebug() << topics;
    QStringList topics = QStringList() << HEARTBEAT.data() << PLAYERS.data();
    foreach (QString s, topics) {
        m_subscriber->subscribe(s.toStdString());
        //m_subscriber->set(socket_option::subscribe, s.toStdString());
    }
    m_snapshot->set(socket_option::identity, m_uuid.toByteArray().data());

    m_reactor = new ClientReactor(m_snapshot, m_subscriber);

    m_snapshotTimer.setInterval(5000);
    m_snapshotTimer.setSingleShot(true);
    QObject::connect(&m_snapshotTimer, SIGNAL(timeout()), this, SLOT(snapshotRequest()));
    QObject::connect(m_reactor, SIGNAL(snapshotCompleted()), &m_snapshotTimer, SLOT(stop()));
    QObject::connect(m_reactor, SIGNAL(snapshotMessage(QByteArray, QByteArray)),
                     this, SLOT(messageReceived(QByteArray, QByteArray)));
    QObject::connect(m_reactor, SIGNAL(messageReceived(QByteArray, QByteArray, QByteArray)),
                     this, SLOT(messageReceived(QByteArray, QByteArray, QByteArray)));
}

void Client::start(const QString& subscriberAddress,
                   const QString& snapshotAddress,
                   const QString& collectorAddress,
                   QStringList& topics)
{
//    qDebug() << "Subscribed topics:";
//    topics.append(HEARTBEAT);
//    qDebug() << topics;
//    foreach (QString s, topics) {
//        m_subscriber->set(socket_option::subscribe, s.toStdString());
//    }
//    m_snapshot->set(socket_option::identity, m_uuid.toByteArray().data());

    m_subscriber->connect(subscriberAddress.toStdString());
    m_snapshot->connect(snapshotAddress.toStdString());
    m_collector->connect(collectorAddress.toStdString());

    snapshotRequest();
}

//void Client::subscribeToTopics(const QStringList &topics)
//{
//    foreach (QString s, topics)
//        m_topics.append(s);
//}

void Client::publish(const QByteArray& topic, const QByteArray& payload) const
{
    zmqpp::message msg;
    msg << topic.data() << payload.data() << m_uuid.toByteArray().data();
    m_collector->send(msg);
}

void Client::snapshotRequest()
{
    qDebug() << "Requesting snapshot";
    zmqpp::message msg;
    msg << REQUEST_SNAPSHOT.data();
    m_snapshot->send(msg);
    m_snapshotTimer.start();
}

//void Client::loop()
//{
////    while (m_running) {
////        m_poller->poll();
////        if (m_poller->has_input(*m_subscriber)) {
////            //std::string txt;
////            zmqpp::message msg;
////            m_subscriber->receive(msg);
////            QString topic = QString::fromStdString(msg.get(0));
////            if (topic == HEARTBEAT) {
////                qDebug() << "heartbeat";
////                emit heartbeat();
////                publish(HEARTBEAT, "");
////            }
////        }
////    }
//}
