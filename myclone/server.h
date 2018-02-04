#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QThread>
#include <QString>
#include <QTimer>
#include <QHash>
#include <QUuid>

#include "zmqpp.hpp"

using namespace zmqpp;

class ServerReactor : public QObject
{
    Q_OBJECT

public:
    ServerReactor(zmqpp::socket* snapshotSocket,
                  zmqpp::socket* collectorSocket,
                  QObject* parent = 0);

public slots:
    void mainLoop();

signals:
    void snapshotRequest(QByteArray sender);
    void messageReceived(QByteArray topic, QByteArray payload, QByteArray sender);

private:
    QThread* m_thread;
    zmqpp::reactor* m_reactor;
    zmqpp::socket* m_snapshot;
    zmqpp::socket* m_collector;
};

class Server : public QObject
{
    Q_OBJECT

public:
    Server(QObject* parent = 0);
    ~Server() {}

    void start(const QString& publishAddress,
               const QString& snapshotAddress,
               const QString& collectorAddress);

    void snapshotEvent();

public slots:
    //void loop();
    void publish(const QByteArray& topic, const QByteArray& payload, const QByteArray& sender);
    void sendSnapshot(const QByteArray& sender);//const QString& topic, const QByteArray& payload, const QString& uuid_client);
    void updateConnections(const QByteArray& sender);
    void heartbeat();
    virtual void messageReceived(const QByteArray& topic, const QByteArray& payload, const QByteArray& sender) {
        Q_UNUSED(topic)
        Q_UNUSED(payload)
        Q_UNUSED(sender)
    }

signals:
    void disconnection(QByteArray b);
    void newConnection(QByteArray b);
    void saveState(QByteArray topic, QByteArray payload);
    void heartbeatFrom(QByteArray sender);

protected:
    QUuid m_uuid;
    QHash<QByteArray, QByteArray> m_hash;

private:
    context* m_context;
    socket* m_publisher;
    socket* m_snapshot;
    socket* m_collector;
    bool m_running;
    //poller* m_poller;
    ServerReactor* m_reactor;
    //QThread* m_thread;

    QHash<QByteArray, bool> m_connections;

    //QTimer* m_heartbeatTimer;
};

#endif // SERVER_H
