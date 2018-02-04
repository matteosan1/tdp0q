#include "server.h"
#include "messages.h"
#include "utility.h"

#include "QByteArray"
#include <QDebug>

ServerReactor::ServerReactor(zmqpp::socket* snapshotSocket,
                             zmqpp::socket* collector,
                             QObject* parent) :
    QObject(parent),
    m_snapshot(snapshotSocket),
    m_collector(collector)
{
    m_reactor = new reactor();
    m_thread = new QThread();
    moveToThread(m_thread);
    QObject::connect(m_thread, SIGNAL(started()), this, SLOT(mainLoop()));

    m_thread->start();
}

void ServerReactor::mainLoop()
{
    auto snapshotListener = [&]() {
        qDebug() << "serversnapshot";
        zmqpp::message msg;
        m_snapshot->receive(msg);
        QByteArray sender = QByteArray::fromStdString(msg.get(0));
        QByteArray topic = QByteArray::fromStdString(msg.get(1));
        if (topic == REQUEST_SNAPSHOT)
            emit snapshotRequest(sender);
    };

    auto collectorListener = [&]() {
        qDebug() << "collector";
        zmqpp::message msg;
        m_collector->receive(msg);
        QByteArray topic = QByteArray::fromStdString(msg.get(0));
        QByteArray payload = QByteArray::fromStdString(msg.get(1));
        QByteArray sender = QByteArray::fromStdString(msg.get(2));

        emit messageReceived(topic, payload, sender);
    };

    m_reactor->add(*m_snapshot, snapshotListener);
    m_reactor->add(*m_collector, collectorListener);

    while (m_reactor->poll())
    {}
}

Server::Server(QObject* parent) :
    QObject(parent),
    m_uuid(QUuid::createUuid()),
    m_running(true)
{
    m_context = new context();

    m_publisher = new socket(*m_context, socket_type::publish);
    m_snapshot = new socket(*m_context, socket_type::router);
    m_collector = new socket(*m_context, socket_type::pull);

    m_reactor = new ServerReactor(m_snapshot, m_collector);
    QObject::connect(m_reactor, SIGNAL(snapshotRequest(QByteArray)), this, SLOT(sendSnapshot(QByteArray)));
    QObject::connect(m_reactor, SIGNAL(messageReceived(QByteArray, QByteArray, QByteArray)),
                     this, SLOT(messageReceived(QByteArray, QByteArray, QByteArray)));
}

void Server::start(const QString& publishAddress,
                   const QString& snapshotAddress,
                   const QString& collectorAddress)
{
    m_publisher->bind(publishAddress.toStdString());
    m_snapshot->bind(snapshotAddress.toStdString());
    m_collector->bind(collectorAddress.toStdString());
}

void Server::updateConnections(const QByteArray& sender)
{
    if (m_connections.find(sender) == m_connections.end())
        emit newConnection(sender);
    m_connections[sender] = true;
}

void Server::heartbeat()
{
    //foreach(QByteArray b, m_connections.keys()) {
    //    if (!m_connections[b]) {
    //        emit disconnection(b);
    //        m_connections.remove(b);
    //    }
    //}
    qDebug() << "sending heartbeat";
    publish(HEARTBEAT.data(), "", "");
    foreach(QByteArray b, m_connections.keys())
        m_connections[b] = false;
}

void Server::sendSnapshot(const QByteArray& sender)
{
    foreach (QByteArray t, m_hash.keys()) {
        zmqpp::message publication;
        publication << sender.toStdString() << t.toStdString() << toMessage(m_hash[t]);
        m_snapshot->send(publication);
    }

    zmqpp::message publication;
    publication << sender.toStdString() << END_SNAPSHOT.toStdString() << QByteArray("").toStdString();

    m_snapshot->send(publication);
}

void Server::publish(const QByteArray& topic, const QByteArray& payload, const QByteArray& sender)
{
    zmqpp::message publication;
    if (sender.isEmpty()) {
        publication << toMessage(m_uuid.toByteArray()) << toMessage(topic) << toMessage(payload);
    }
    else {
        publication << sender.toStdString() << topic.toStdString() << toMessage(payload);
    }

    m_publisher->send(publication);

    if (topic.endsWith("/state"))
        m_hash[topic] = payload;
}

//void Server::loop()
//{
//    zmqpp::message msg;
///        else if (m_poller->has_input(*m_collector)) {
//            qDebug() << "message received";
//            m_collector->receive(msg);
//            QString topic = QString::fromStdString(msg.get(0));
//            QByteArray payload = QByteArray(msg.get(1).c_str());
//            QByteArray sender = QByteArray(msg.get(2).c_str());

//            if (topic == HEARTBEAT) {
//                //emit heartbeatFrom(sender);
//                return;
//            }

//            if (topic.endsWith("state")) {
//                 m_hash[topic] = payload;
//            }

//            emit messageReceived(topic, payload, sender);
//            publish(topic, payload, sender);
//        }
//    }
//}



