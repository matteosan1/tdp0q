#include "cavallo.h"

namespace common {

Cavallo::Cavallo() :
    m_indice(0),
    m_nome(""),
    m_eta(0)
{
    for(int i=0; i<4; i++)
        m_capacita[i] = 0;

    for (int i=0; i<3; ++i)
        m_score[i] = 0;
}

Cavallo::~Cavallo()
{}

float Cavallo::media()
{
    float m = (float)(precisione()+velocita()+scatto())/3.;
    return m;
}

QList<int> Cavallo::caratteristiche()
{
    QList<int> a;
    for(int i=0; i<4; i++)
        a.append(m_capacita[i]);

    return a;
}

tdpalio::Horse Cavallo::toHorse() const
{
    tdpalio::Horse h;

    h.set_indice(m_indice);
    h.set_nome(m_nome.toStdString());
    h.set_colore(m_colore);
    h.set_eta(m_eta);
    for (int i=0; i<m_capacita.count(); i++)
        h.add_capacita(m_capacita.at(i));
    for (int i=0; i<m_score.count(); i++)
        h.add_score(m_score.at(i));
    h.set_selezione(m_selezione);
    h.set_coscia(m_coscia);
    h.set_infortunio(m_infortunio);

    return h;
}

void Cavallo::fromHorse(const tdpalio::Horse& h)
{
    m_indice = h.indice();
    m_nome = QString::fromStdString(h.nome());
    m_colore = h.colore();
    m_eta = h.eta();
    for (int i=0; i<h.capacita_size(); i++)
        m_capacita[i] = h.capacita(i);
    for (int i=0; i<h.score_size(); i++)
        m_score[i] = h.score(i);
    m_selezione = h.selezione();
    m_coscia = h.coscia();
    m_infortunio = h.infortunio();
}
}
