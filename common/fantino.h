#ifndef FANTINO_H
#define FANTINO_H

#include <QList>
#include <QString>

#include "jockeys.pb.h"

namespace common {

class Offerta
{

public:
    Offerta();
    ~Offerta();

    void setOfferta(const int& a, const int& b, const int& c, const int& d);

    int chi() { return m_chi; }
    int controChi() { return m_controchi; }
    int aVincere() { return m_avincere; }
    int aPerdere() { return m_aperdere; }
//    void setCoefficiente(float a) { coefficiente_ = a; };
//    float coefficiente() { return coefficiente_; };

    tdpalio::Offer toOffer() const;
    void fromOffer(const tdpalio::Offer& offer);

private:
    int m_chi;
    int m_controchi;
    int m_avincere;
    int m_aperdere;
    //float coefficiente_;
};


class Fantino
{
public:
    Fantino();
    Fantino(const int index, const QString& nome, const QVariantList& caratteristiche) :
        m_indice(index),
        m_nome(QString(nome).replace("_", " "))
    {
        m_eta = caratteristiche[0].toInt();
        for(int i=1; i<4; i++)
            m_capacita.append(caratteristiche[i].toInt());

        for(int i=4; i<8; i++)
            m_score.append(caratteristiche[i].toInt());

        for(int i=8; i<25; i++)
            m_feelingContrade.append(caratteristiche[i].toInt());

        m_contrada = caratteristiche[25].toInt();
    }
    ~Fantino();

    //void creaFantino(int a0, QString a, int b, int c, int d, int e, int f, Offerta* g);
    void creaFantino(const int& indice,
                     const QString& nome,
                     const int& prontezza,
                     const int& determinazione,
                     const int& bravura,
                     const int& contrada);

    QString nome() const { return m_nome; }
    int indice() const { return m_indice; }
    int eta() const { return m_eta; }
    int paliCorsi() const { return m_score[0]; }
    int paliVinti() const { return m_score[1]; }
    int piazzamenti() const { return m_score[2]; }
    //void setPiazza(int i);

    int prezzo();
    int prontezza() const { return m_capacita[0]; }
    int determinazione() const { return m_capacita[1]; }
    int bravura() const { return m_capacita[2]; }
    int killer() const { return m_capacita[3]; }

    float media() const { return (float)(m_capacita[0]+m_capacita[1]+m_capacita[2])/(float)3; }
    QList<int> caratteristiche();

    int feeling(int i) const { return m_feelingContrade[i]; }
    int correper() const { return m_contrada; }
    void setContrada(const int& c) { m_contrada = c; }

    void setInfortunio(const int& i) { m_infortunio = i; }

    quint8 nOfferte() const { return m_offerte.size(); }
    void setOfferta(const int& a, const int& b, const int& c, const int& d);
    void setOfferta(const Offerta& a) { m_offerte.append(a); }
    Offerta offerta(const int& i) { return m_offerte.at(i); }
    QList<Offerta> offerte() { return m_offerte; }
    void clearOfferte(const int& da, const int& a=-1);

    tdpalio::Jockey toJockey() const;
    void fromJockey(const tdpalio::Jockey& j);

private:
    int     m_indice;
    int     m_eta;
    QString m_nome;
    QList<int> m_capacita;         // prontezza, determinazione, bravura, killer
    QList<int> m_score;            // anni, palii corsi, palii vinti
    QList<int>  m_feelingContrade;
    int     m_contrada;
    //int     m_nOff; // ????????
    int     m_infortunio;
    QList<Offerta> m_offerte;
};

} // common
#endif
