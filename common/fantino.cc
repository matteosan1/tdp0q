#include "fantino.h"

namespace common {

Fantino::Fantino() :
    m_nome(""),
    m_contrada(-1)
{
    for(int i=0; i<4; i++)
        m_capacita[i] = 0;

    for(int i=0; i<3; i++)
        m_score[i] = 0;

    for(int i=0; i<17; i++)
        m_feelingContrade[i] = 6;
}

Fantino::~Fantino()
{}

Offerta::~Offerta()
{}

Offerta::Offerta()
{}

void Offerta::setOfferta(const int& chiOffre, const int& controChi, const int& aVincere, const int& aPerdere)
{
    m_chi = chiOffre;
    m_controchi = controChi;
    m_avincere = aVincere;
    m_aperdere = aPerdere;
}

void Fantino::clearOfferte(const int& da , const int& a)
{

    for (int i=da; i<a; ++i)
    {
        m_offerte.removeAt(i);
    }
}

void Fantino::setOfferta(const int& chiOffre, const int& controChi, const int& aVincere, const int& aPerdere) {

    Offerta o;
    o.setOfferta(chiOffre, controChi, aVincere, aPerdere);
    m_offerte.append(o);
}

//void Fantino::creaFantino(int a0, QString a, int b, int c, int d, int e, int f, Offerta* g) {

//    index = a0;
//    Nome = a;
//    Capacita[0] = b;
//    Capacita[1] = c;
//    Capacita[2] = d;
//    for(int i=0; i<4; i++)
//        Score[i] = 0;

//    for(int i=0; i<17; i++)
//        Feeling[i] = 0;

//    contrada = e;
//    nOff = f;
//    for(int i=0; i<18; i++)
//        offerte[i] = *(g+i);
//}

void Fantino::creaFantino(const int& indice,
                          const QString& nome,
                          const int& prontezza,
                          const int& determinazione,
                          const int& bravura,
                          const int& contrada) {

    m_indice = indice;
    m_nome = nome;
    m_capacita[0] = prontezza;
    m_capacita[1] = determinazione;
    m_capacita[2] = bravura;
    for(int i=0; i<3; i++)
        m_score[i] = 0;

    for(int i=0; i<17; i++)
        m_feelingContrade[i] = 0;

    m_contrada = contrada;
}

//void Fantino::setPiazza(int i) {

//    if ((i<5) && (i>1))
//        Score[3] += 100;
//    if (i>4)
//        Score[3] += 1;
//}

int Fantino::prezzo()
{
    int prezzo = 20;
    if ((paliCorsi() != 0) && (paliCorsi() < 5))
        prezzo += 10 * paliCorsi();

    int secondi = (int)(piazzamenti()/100);
    int ultimi = piazzamenti()-secondi*100;

    if (eta() < 11) {
        prezzo += 20 * secondi;
        prezzo -= 10 * ultimi;
    } else {
        prezzo -= 10 * secondi;
        prezzo -= 20 * ultimi;
    }
    prezzo += paliVinti() * 50;

    if ((paliCorsi() > 4) && (prezzo < 60))
        prezzo = 50;

    return prezzo;
}

QList<int> Fantino::caratteristiche()
{
    QList<int> a;
    for(int i=0; i<3; i++)
        a.append(m_capacita[i]);

    return a;
}

tdpalio::Offer Offerta::toOffer() const
{
    tdpalio::Offer o;

    o.set_da_chi(m_chi);
    o.set_contro_chi(m_controchi);
    o.set_a_vincere(m_avincere);
    o.set_a_perdere(m_aperdere);

    return o;
}

void Offerta::fromOffer(const tdpalio::Offer& offer)
{
    m_chi = offer.da_chi();
    m_controchi = offer.contro_chi();
    m_avincere = offer.a_vincere();
    m_aperdere = offer.a_perdere();
}

tdpalio::Jockey Fantino::toJockey() const
{
    tdpalio::Jockey j;
    j.set_indice(m_indice);
    j.set_eta(m_eta);
    j.set_nome(m_nome.toStdString());
    for (int i=0; i<m_capacita.size(); i++)
        j.add_capacita(m_capacita.at(i));
    for (int i=0; i<m_score.size(); i++)
        j.add_score(m_score.at(i));
    for (int i=0; i<m_feelingContrade.size(); i++)
        j.add_feelingcontrade(m_feelingContrade.at(i));
    j.set_contrada(m_contrada);
    j.set_infortunio(m_infortunio);
    for (int i=0; i<m_offerte.size(); i++)
        j.add_offerte()->CopyFrom(m_offerte.at(i).toOffer());

    return j;
}

void Fantino::fromJockey(const tdpalio::Jockey& j)
{
    m_indice = j.indice();
    m_eta = j.eta();
    m_nome = QString::fromStdString(j.nome());
    for (int i=0; i<j.capacita_size(); i++)
        m_capacita[i] = j.capacita(i);
    for (int i=0; i<j.score_size(); i++)
        m_score[i] = j.score(i);
    for (int i=0; i<j.feelingcontrade_size(); i++)
        m_feelingContrade[i] = j.feelingcontrade(i);
    m_contrada = j.contrada();
    m_infortunio = j.infortunio();
    for (int i=0; i<j.offerte_size(); i++) {
        Offerta o;
        o.fromOffer(j.offerte(i));
        m_offerte[i] = o;
    }
}

} // common
