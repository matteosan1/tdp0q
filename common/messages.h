#ifndef MESSAGES_H
#define MESSAGES_H

#define HEARTBEAT QByteArray("/broker/heartbeat")
#define END_SNAPSHOT QByteArray("/broker/endsnapshot/event")
#define REQUEST_SNAPSHOT QByteArray("/node/requestsnapshot/event")

#define REGISTER_PLAYER QByteArray("/node/connection/state")
#define PLAYERS QByteArray("/broker/players/state")

#define CONTRADE QByteArray("/broker/contradas/state")
#define GIOCATORI QByteArray("/broker/players/state")
#define CAVALLI QByteArray("/broker/horses/state")
#define FANTINI QByteArray("/broker/jockeys/state")

#endif // MESSAGES_H
