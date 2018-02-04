#ifndef TDPALIOAICLIENT_H
#define TDPALIOAICLIENT_H

#include "contrada.h"
#include "giocatore.h"
#include "cavallo.h"
#include "fantino.h"
#include "barbero.h"
#include "client.h"

#include <QList>

using namespace common;

class TRandom;

class TDPalioAiClient : public Client {
    Q_OBJECT

public:
    TDPalioAiClient(TRandom* r);

    virtual void messageReceived(const QByteArray& topic, const QByteArray& payload, const QByteArray& uuid);

private:
    void registerPlayer();
//    void sendMessage(MessageCode);
//    void openConnection(int a);
//    void processMessage(QDataStream&);
//    void sceltaCavalli(int, QVector<Cavallo>);
//    void sceltaFantino(int, QVector<Fantino>);
//    void inserisciPartito(QVector<Barbero>);
//    void rispostePartiti(QVector<Barbero>);

//    //bool salvaCorrente();
//    //int Avversaria( int io );
//    //int ordine_prove[10][6];

public slots:

//    void incomingMessage();
//    void displayError(QAbstractSocket::SocketError);
//    /*
//    void controller();
//    QString getData();
//    void close();
//    void estrazione( int n );
//    void nuovaFase();
//    void formaCavalli();
//    void visualizzaEstrazione();
//    void SceltaCavalli();
//    void Assegnazione( int * cav );
//    void SceltaFantino();
//    void Segnatura();
//    void Prove();
//    */

private:
    //Fase fase;
    //QString curFile;
    //QVector<Barbero> barberi;
    TRandom* m_random;
    //int luglio[17], agosto[17], settembre[17];
    //QVector<Cavallo> cavalli;
    //QVector<Fantino> fantini;
    QList<Contrada> m_contrade;
    //int corrono[17];
    bool m_modificato;
    //int anno;
    //Mese mese;
    //int nProva;

    //Barbero* barbero;
    Giocatore* m_giocatore;
    int round;
};

#endif
