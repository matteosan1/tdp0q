#ifndef CAVALLO_H
#define CAVALLO_H

#include <QString>
#include <QList>
#include <QVariantList>

#include "horses.pb.h"

namespace common {

class Cavallo {
public:
    Cavallo();
    Cavallo(const int index, const QString& nome, const QVariantList& caratteristiche) :
        m_indice(index),
        m_nome(QString(nome).replace("_", " "))
    {
        m_eta = caratteristiche[0].toInt();
        m_colore = caratteristiche[1].toInt();
        for(int i=2; i<5; i++)
            m_capacita.append(caratteristiche[i].toInt());

        for(int i=5; i<8; i++)
            m_score.append(caratteristiche[i].toInt());
    }

    ~Cavallo();

    int indice() const { return m_indice; }
    int eta() const { return m_eta; }
    int tratte() const { return m_score[0]; }
    int paliCorsi() const { return m_score[1]; }
    int paliVinti() const { return m_score[2]; }

    int scatto() const { return m_capacita[0]; }
    int velocita() const { return m_capacita[1]; }
    int precisione() const { return m_capacita[2]; }

    int forma() const { return m_capacita[3]; }
    void setForma(const int& f) { m_capacita[3] = f; }

    float media();
    QList<int> caratteristiche();
    
    QString nome() { return m_nome; }
    int colore() { return m_colore; }

    int coscia() { return m_coscia; }
    void setCoscia(const int& c) { m_coscia = c; }

    int selezione() const { return m_selezione; }
    void piuSelezione() { m_selezione++; }
    void noSelezione() { m_selezione = 0; }

    void setInfortunio(const int& i) { m_infortunio = i; }

    tdpalio::Horse toHorse() const;
    void fromHorse(const tdpalio::Horse& h);

//    friend QDataStream& operator<<(QDataStream& out, Cavallo x);
//    friend QTextStream& operator<<(QTextStream& out, Cavallo x);
//    friend QTextStream& operator>>(QTextStream& in, Cavallo& x);
//    friend QDataStream& operator>>(QDataStream& in, Cavallo& x);

private:
    unsigned int        m_indice;
    QString             m_nome;
    unsigned int        m_colore;
    unsigned int        m_eta;
    QList<unsigned int> m_capacita; // scatto(ripresa), velocita(v max), precisione(capacita` di infilarsi nei pertugi), forma
    QList<unsigned int> m_score;    // tratte, palii corsi, palii vinti
    unsigned int        m_selezione;
    unsigned int        m_coscia;
    unsigned int        m_infortunio;
};
} // common
#endif
