#include "contrada.h"

#include <QDebug>

namespace common {

Contrada::Contrada() :
    m_nome(""),
    m_giocatore(-1),
    m_fantino(-1)
{
    m_status = QList<quint32>({0,0,0});
    m_vittorie = QList<quint32>({0,0,0,0});
    m_feelingContrade = QList<quint32>({6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6});
}

Contrada::~Contrada()
{}

void Contrada::setContrada(const int& indice,
                           const QString& nome,
                           const QString& nomeCompleto,
                           const int* status,
                           const int* feelings)

{
    m_nome = nome;
    m_nomeCompleto = nomeCompleto;
    m_indice = indice;
    for(int i=0; i<3; i++)
        m_status[i] = status[i];

    for(int i=0; i<17; i++)
        m_feelingContrade[i] = feelings[i];
}

tdpalio::PContrada Contrada::toPContrada() const
{
    tdpalio::PContrada c;
    c.set_nome(m_nome.toStdString());
    c.set_nome_completo(m_nomeCompleto.toStdString());
    c.set_indice(m_indice);
    for (int i=0; i<m_status.size(); i++)
        c.add_status(m_status.at(i));
    for (int i=0; i<m_vittorie.size(); i++)
        c.add_vittorie(m_vittorie.at(i));
    c.set_giocatore(m_giocatore);
    c.set_fantino(m_fantino);
    for (int i=0; i<m_feelingContrade.size(); i++)
        c.add_feelings(m_feelingContrade.at(i));
    //int     m_barbero;
    //int     m_monta;

    return c;
}

void Contrada::fromPContrada(const tdpalio::PContrada& c)
{
    m_status.clear();
    m_vittorie.clear();
    m_feelingContrade.clear();

    m_nome = QString::fromStdString(c.nome());
    m_nomeCompleto = QString::fromStdString(c.nome_completo());
    m_indice = c.indice();
    for (int i=0; i<c.status_size(); i++)
        m_status.append((c.status(i)));
    for (int i=0; i<c.vittorie_size(); i++)
        m_vittorie.append(c.vittorie(i));
    m_giocatore = c.giocatore();
    m_fantino = c.fantino();
    for (int i=0; i<c.feelings_size(); i++)
        m_feelingContrade.append(c.feelings(i));
    //int     m_barbero;
    //int     m_monta;
}

/*
int Contrada::avversaria() {
    for(int i=0; i<17; i++)
        if (Feeling[i] == 0)
            return i;

    return -1;
}
*/
} // common
