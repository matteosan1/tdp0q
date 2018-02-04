#include "broker.h"
#include "messages.h"

#include <QDebug>
#include <QTimer>

Broker::Broker(QObject* parent) :
    QObject(parent)
{
    m_heartbeatTimer.setInterval(5000);
    QObject::connect(&m_heartbeatTimer, SIGNAL(timeout()), this, SLOT(heartbeat()));
}

void Broker::setAddresses(const QString& publisherAddress, const QString& snapshotAddress, const QString& collectorAddress)
{
    m_thread = new QThread(this);
    m_server = new Server(publisherAddress, snapshotAddress, collectorAddress);
    m_server->moveToThread(m_thread);

    QObject::connect(m_thread, SIGNAL(started()), m_server, SLOT(loop()));
    QObject::connect(m_server, SIGNAL(snapshotRequest(QString)), this, SLOT(sendSnapshot(QString)));
    QObject::connect(m_server, SIGNAL(saveState(QString,QByteArray)), this, SLOT(saveState(QString,QByteArray)));
    QObject::connect(m_server, SIGNAL(heartbeatFrom(QByteArray)), this, SLOT(updateConnections(QByteArray)));
    m_heartbeatTimer.start();
}

void Broker::updateConnections(const QByteArray& sender)
{
    if (m_connections.find(sender) == m_connections.end())
        emit newConnection(sender);
    m_connections[sender] = true;
}

void Broker::heartbeat()
{
    foreach(QByteArray b, m_connections.keys()) {
        if (!m_connections[b]) {
            emit disconnection(b);
            m_connections.remove(b);
        }
    }

    m_server->publish(HEARTBEAT, "", "");
    foreach(QByteArray b, m_connections.keys())
        m_connections[b] = false;
}

void Broker::saveState(const QString& topic, const QByteArray& payload)
{
    m_hash[topic] = payload;
}

void Broker::sendSnapshot(const QString& uuid_client)
{
    foreach (QString t, m_hash) {
        m_server->sendSnapshot(t, m_hash[t], uuid_client);
    }

    m_server->sendSnapshot(END_SNAPSHOT, "", uuid_client);
}

void Broker::start()
{
    m_thread->start();
}

