#ifndef LISTENER_H
#define LISTENER_H

#include <QObject>
#include <QThread>
#include <QStringList>
#include <QUuid>
#include <QTimer>

#include "zmqpp.hpp"

using namespace zmqpp;

class ClientReactor : public QObject
{
    Q_OBJECT

public:
    ClientReactor(zmqpp::socket* snapshotSocket,
                  zmqpp::socket* subscriberSocket,
                  QObject* parent = 0);

public slots:
    void mainLoop();

signals:
    void snapshotCompleted();
    void snapshotMessage(QByteArray topic, QByteArray payload);
    void messageReceived(QByteArray topic, QByteArray payload, QByteArray sender);

private:
    QThread* m_thread;
    zmqpp::reactor* m_reactor;
    zmqpp::socket* m_snapshot;
    zmqpp::socket* m_subscriber;
};

class Client : public QObject
{
    Q_OBJECT

public:
    Client(QObject* parent = 0);
    ~Client() {}

    void start(const QString& subscriberAddress,
               const QString& snapshotAddress,
               const QString& collectorAddress,
               QStringList& topics);
    //void subscribeToTopics(const QStringList& topics);

    //void publish(const QString& topic, const QString& payload) const;
    void publish(const QByteArray& topic, const QByteArray& payload) const;

public slots:
    //bool snapshotReceived() const { return m_snapshotCompleted; }
    void snapshotRequest();
    virtual void messageReceived(const QByteArray& topic, const QByteArray& payload, const QByteArray& uuid = QByteArray()) {
        Q_UNUSED(topic)
        Q_UNUSED(payload)
        Q_UNUSED(uuid)
    }
    //void loop();

signals:
    void heartbeat();

protected:
    QUuid m_uuid;

private:
    context* m_context;
    socket* m_subscriber;
    socket* m_snapshot;
    socket* m_collector;
    bool m_running;

    //QThread* m_thread;
    QTimer m_snapshotTimer;
    //QStringList m_topics;
    //bool m_snapshotCompleted;

    //poller* m_poller;
    ClientReactor* m_reactor;
};

#endif // LISTENER_H
