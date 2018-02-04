#ifndef TDPALIOSERVER_H
#define TDPALIOSERVER_H

#include "giocatore.h"
#include "contrada.h"
#include "cavallo.h"
#include "fantino.h"
#include "barbero.h"
#include "code.h"
#include "TRandom.h"
//#include "MyStreamer.h"

#include "fase.h"

#include "server.h"

#include <QObject>
#include <QList>
#include <QTimer>

using namespace common;

class TDPalioAiClient;

class TDPalioServer : public Server
{
    Q_OBJECT

    enum TipoEstrazione {Inizio, Ordinario, Straordinario};
    //enum Fase {eInizio, eEstrazione, eTratta, eSceltaFantino, eProve, eSegnatura, ePalio, eFinePalio};
    enum Mese {Luglio, Agosto, Settembre};

public:
    TDPalioServer();
    void estrazione(TipoEstrazione tipo);

private:
    void makeDefaultState();
    int scegliContrada(const int& contradaRichiesta);

//    void sendMessage(MessageCode, MySocket*);
//    void sendMessage(MessageCode, int);
//    void processMessage(QDataStream& in);
//    void disconnection(int);
//    bool caricaFile();
//    void salvaFile();
//    void controller();
//    //void controller(Fase);
//    void sceltaStrategia();
//    void sceltaCavalli();
//    void preTratta();
//    void azzeraSockets();
//    void assegnazione();
//    void rispostaFantino();
//    void formaCavalli();
//    void sceltaFantino();
//    void preSceltaFantino();
//    QVector<Fantino> filtroFantini(Barbero);
//    void prove();
//    void inserisciPartito();
//    void rispostaPartito();
//    void segnatura();
//    void palio();
//    void finePalio();
//    void miglioramentoProve(QString&);
//    void mossa();
//    void scegliContrada(int);

public slots:
      virtual void messageReceived(const QByteArray& topic, const QByteArray& payload, const QByteArray& uuid);
//    void acceptConnection();
//    void incomingMessage();
//    void error(QAbstractSocket::SocketError e);

private:
    TRandom* m_random;
    int luglio[17], agosto[17], settembre[17];
    int ordine_prove[10][6];
    QList<Contrada> m_contrade;
    QList<Fantino> m_fantini;
    QList<Cavallo> m_cavalli;
    QList<Giocatore> m_giocatori;
    QList<Barbero> m_barberi;

    QList<TDPalioAiClient*> m_aiclients;

    int isChoosing;
    QString fileName;

    FaseGioco *fase;
    Mese mese;
    int anno;
    int nProva;
    int corrono[17];

    QTimer m_heartbeatTimer;
};

#endif
