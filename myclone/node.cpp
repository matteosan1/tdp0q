#include "node.h"
#include "messages.h"

#include <QDebug>

Node::Node(QObject* parent) :
    QObject(parent),
    m_snapshotCompleted(false)
{   
    m_snapshotTimer.setInterval(5000);
    m_snapshotTimer.setSingleShot(true);
    QObject::connect(&m_snapshotTimer, SIGNAL(timeout()), this, SLOT(snapshotRequest()));

}

void Node::setAddresses(const QString& publisherAddress, const QString& snapshotAddress, const QString& collectorAddress)
{
    m_thread = new QThread(this);
    m_client = new Client(const QString& publisherAddress, const QString& snapshotAddress, const QString& collectorAddress, m_topics);
    m_client->moveToThread(m_thread);

    QObject::connect(m_thread, SIGNAL(started()), m_client, SLOT(startClient()));
    QObject::connect(m_client, SIGNAL(messageReceived(QString,QByteArray,QUuid)), this, SLOT(messageReceived(QString,QByteArray,QUuid)));
    QObject::connect(m_client, SIGNAL(snapshotCompleted()), this, SLOT(snapshotCompleted()));

    start();
    snapshotRequest();
}

void Node::subscribeToTopics(const QStringList &topics)
{
    foreach (QString s, topics)
        m_topics.append(s);
}

void Node::snapshotRequest()
{
    m_client->snapshotRequest(REQUEST_SNAPSHOT);
    m_snapshotTimer.start();
}

void Node::start()
{
    qDebug() << "start";
    m_thread->start();
}

void Node::snapshotCompleted()
{
    m_snapshotTimer.stop();
    m_snapshotCompleted = true;
    qDebug() << "Snapshot completed";
}


