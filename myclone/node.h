#ifndef WINDOW_H
#define WINDOW_H

#include <QObject>
#include <QThread>
#include <QTimer>
#include <QStringList>
#include <QUuid>

#include "client.h"

class Node : public QObject
{
    Q_OBJECT

public:
    Node(QObject* parent = 0);
    void setAddresses(const QString& publisherAddress, const QString& snapshotAddress, const QString& collectorAddress);

    QUuid getUuid() const { return m_client->getUuid(); }

    void subscribeToTopics(const QStringList& topics);
    bool snapshotReceived() const { return m_snapshotCompleted; }

public slots:
    void messageReceived(const QString& topic, const QByteArray& payload, const QUuid& uuid_sender);
    virtual void snapshotCompleted();
    void snapshotRequest();
    void start();

protected:
    Client* m_client;

private:
};

#endif // WINDOW_H
