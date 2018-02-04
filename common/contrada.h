#ifndef CONTRADA_H
#define CONTRADA_H

#include <QString>
#include <QTextStream>
#include <QDataStream>

#include "contrada.pb.h"

namespace common {

class Contrada {

public:
    Contrada();
    Contrada(const int index, const QString& nome, const QString& nomeCompleto, const QVariantList& caratteristiche) :
        m_nome(nome),
        m_nomeCompleto(nomeCompleto),
        m_indice(index)
    {

        for (int i=0; i<3; i++)
            m_status.append(caratteristiche[i].toUInt());

        for(int i=3; i<7; i++)
            m_vittorie.append(caratteristiche[i].toUInt());

        m_giocatore = caratteristiche[8].toInt();
        m_fantino = caratteristiche[9].toInt();

        for(int i=10; i<caratteristiche.size(); i++)
          m_feelingContrade.append(caratteristiche[i].toUInt());
    }
    ~Contrada();

    QString nome() const { return m_nome; }
    QString nomeCompleto() const { return m_nomeCompleto; }

    unsigned int indice() const { return m_indice; }

    unsigned int popolo() const { return m_status[0]; }
    unsigned int denaro() const { return m_status[1]; }
    unsigned int umore() const { return m_status[2]; }

    unsigned int luglio() const { return m_vittorie[0]; }
    unsigned int agosto() const { return m_vittorie[1]; }
    unsigned int straordinario() const { return m_vittorie[2]; }
    unsigned int cuffia() const { return m_vittorie[3]; }

    int giocatore() const { return m_giocatore; }
    int fantino() const { return m_fantino; }
    int barbero() const { return m_barbero; } // ????????
    int monta() const { return m_monta; } // ???????

    int avversaria();

    unsigned int feelingContrade(const unsigned int& i) const { return m_feelingContrade[i]; }

    // FIXME FARE COPIA ESSENZIALE PER TUTTE LE CONTRADE
    tdpalio::PContrada toPContrada() const;
    void fromPContrada(const tdpalio::PContrada& c);

    void setContrada(const int& j, const QString& a, const QString& d, const int* b, const int* c);
    void setGiocatore(const int& i) { m_giocatore = i; }
    void setBarbero(const int& b) { m_barbero = b; }
    void setMonta(const int& m) { m_monta = m; }

private:
    QString             m_nome;
    QString             m_nomeCompleto;
    unsigned int        m_indice;           // 0 Aquila, 1 Bruco, 2 Chiocciola...
    QList<unsigned int> m_status;           // popolo, denaro, umore
    QList<unsigned int> m_vittorie;         // luglio, agosto, settembre, cuffia
    int                 m_giocatore;        // -1 niente altrimenti indice del vettore di giocatori
    int                 m_fantino;          // eventuale indice del fantino di contrada
    QList<unsigned int> m_feelingContrade;  // rapporto con le altre contrade
    int                 m_barbero;
    int                 m_monta;
};

} // common

#endif
