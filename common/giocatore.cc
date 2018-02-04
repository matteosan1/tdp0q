#include "giocatore.h"

#include <QDebug>
// FIXME prevedi giocatori con nomi o cognomi con spazi

Giocatore::Giocatore() {
    m_nome = "";
    m_cognome = "";
    m_contrada = -1;
    m_tempo_in_carica = 0;
    m_score = QList<quint8>({0, 0});
    m_sta_giocando = false;
}

Giocatore::~Giocatore()
{}

tdpalio::Player Giocatore::toPlayer() const
{
    tdpalio::Player p;
    p.set_nome(m_nome.toStdString());
    p.set_cognome(m_cognome.toStdString());
    p.set_username(m_username.toStdString());
    p.set_contrada(m_contrada);
    p.set_tempo_in_carica(m_tempo_in_carica);
    for (int i=0; i<m_score.size(); i++)
        p.add_score(m_score.at(i));
    p.set_sta_giocando(m_sta_giocando);

    return p;
}

void Giocatore::fromPlayer(const tdpalio::Player& p)
{
    m_nome = QString::fromStdString(p.nome());
    m_cognome = QString::fromStdString(p.cognome());
    m_username = QString::fromStdString(p.username());
    m_contrada = p.contrada();
    m_tempo_in_carica = p.tempo_in_carica();
    for (int i=0; i<p.score_size(); i++)
        m_score[i] = p.score(i);
    m_sta_giocando = p.sta_giocando();
}
