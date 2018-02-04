#ifndef BROKER_H
#define BROKER_H

#include <QObject>
#include <QThread>
#include <QTimer>
#include <QHash>

#include "server.h"
#include "messages.h"

class Broker : public QObject
{
    Q_OBJECT

public:
    Broker(QObject* parent = 0);
    void setAddresses(const QString& publisherAddress, const QString& snapshotAddress, const QString& collectorAddress);

signals:
    void disconnection(QByteArray b);
    void newConnection(QByteArray b);

public slots:
    void updateConnections(const QByteArray& sender);
    void heartbeat();
    void start();
    void sendSnapshot(const QString& uuid_client);
    void saveState(const QString& topic, const QByteArray& payload);

private:
    QHash<QString, QByteArray> m_hash;
    QThread* m_thread;
    Server* m_server;

    QHash<QByteArray, bool> m_connections;

    QTimer m_heartbeatTimer;
};

#endif // BROKER_H
