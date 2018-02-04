#ifndef GIOCATORE_H
#define GIOCATORE_H

#include <QString>
#include <QList>

#include "players.pb.h"

class Giocatore
{
public:
    Giocatore();
    virtual ~Giocatore();

    void setUsername(QString n) { m_username = n; }
    void setNome(QString n) { m_nome = n; }
    void setCognome(QString n) { m_cognome = n; }
    void setContrada(int a) { m_contrada = a; }
    void setGioca() { m_sta_giocando = true; }

    QString userName() { return m_username; }
    QString nome() { return m_nome; }
    QString cognome() { return m_cognome; }
    QString nomeCompleto() { return m_nome + " " + m_cognome; }

    bool gioca() { return m_sta_giocando; }
    int contrada() { return m_contrada; }
    int tempo() { return m_tempo_in_carica; }
    int corsi() { return m_score.at(0); }
    int vittorie() { return m_score.at(1); }

    tdpalio::Player toPlayer() const;
    void fromPlayer(const tdpalio::Player& p);

private:
    QString m_nome, m_cognome, m_username;
    int m_contrada;
    int m_tempo_in_carica;
    QList<quint8> m_score;
    bool m_sta_giocando;
};
#endif
