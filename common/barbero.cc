#include "barbero.h"

namespace common {

Barbero::Barbero() {

  m_contrada = 0;
  m_fantino = 0;
  m_cavallo = 0;
  m_prove.resize(6);
}

Barbero::~Barbero()
{}

bool Barbero::partitiAccettati() {
  
  int acc = 0;

  for(int i=0; i<m_partiti.size(); i++) {
    if (m_partiti[i].fatto())
      acc++;
  }
  
  if (acc == 1) 
    return false;

  return true;
}

bool Barbero::setPartito(Partito p) {

  m_partiti.append(p);

  return true;
}

void Barbero::setPartitoFatto(int i) {
  m_partiti[i].setFatto();
}

//bool Barbero::setPartito(int a, TipoPartito b, int c) {

//  Partito p;
  
//  p.setPartito(a, b, c);
//  m_partiti.append(p);
  
//  return true;
//}

void Barbero::setProve(ProveStrategie p) {
    m_prove = p;
}

//QTextStream& operator<<(QTextStream& out, Barbero& x) {

//  if (x.contrada != 0)
//    out << x.contrada->indice() << " ";
//  else
//    out << "0" << " ";

//  if (x.fantino != 0)
//    out << x.fantino->indice() << " ";
//  else
//    out << "0" << " ";

//  if (x.cavallo != 0)
//    out << x.cavallo->indice() << " ";
//  else
//    out << "0" << " ";

//  out << x.estrazione_ << " ";
//  out << x.partiti_.size() << "\n";
//  for(int i=0; i<x.partiti_.size(); ++i)
//    out << x.partiti_[i] << "\n";
  
//  out << x.theStrategia << " " << x.theAvversaria << " ";
//  for(int i=0; i<3; i++)
//    out << x.theForma[i] << " ";
  
//  out << "\n";
//  for(int i=0; i<6; ++i)
//    out << x.prove[i].first << " " << x.prove[i].second << "\n";
  
//  return out;
//}

//QDataStream& operator<<(QDataStream& out, Barbero& x) {

//  if (x.contrada != 0)
//    out << x.contrada->indice() << " ";
//  else
//    out << "0" << " ";

//  if (x.fantino != 0)
//    out << x.fantino->indice() << " ";
//  else
//    out << "0" << " ";

//  if (x.cavallo != 0)
//    out << x.cavallo->indice() << " ";
//  else
//    out << "0" << " ";

//  out << x.estrazione_ << " ";
//  out << x.partiti_.size() << "\n";
//  for(int i=0; i<x.partiti_.size(); ++i)
//    out << x.partiti_[i] << "\n";
  
//  out << x.theStrategia << " " << x.theAvversaria << " ";
//  for(int i=0; i<3; i++)
//    out << x.theForma[i] << " ";
  
//  out << "\n";
//  for(int i=0; i<6; ++i)
//    out << x.prove[i].first << " " << x.prove[i].second << "\n";
  
//  return out;
//}

//QDataStream& operator>>(QDataStream& in, Barbero& x) {
  
//  int a, b;
//  in >> x.indice[0] >> x.indice[1] >> x.indice[2] >> x.estrazione_ >> a;
  
//  x.partiti_.resize(a);
//  for(int i=0; i<a; ++i)
//    in >> x.partiti_[i];
  
//  in >> x.theStrategia >> x.theAvversaria;
//  for(int i=0; i<3; i++)
//    in >> x.theForma[i];
  
//  for(int i=0; i<6; ++i) {
//    in >> a >> b;
//    x.prove[i].first = a;
//    x.prove[i].second = b;
//  }
  
  
//  return in;
//}

//QTextStream& operator>>(QTextStream& in, Barbero& x) {
  
//  int a, b;
//  in >> x.indice[0] >> x.indice[1] >> x.indice[2] >> x.estrazione_ >> a;
  
//  x.partiti_.resize(a);
//  for(int i=0; i<a; ++i)
//    in >> x.partiti_[i];
  
//  in >> x.theStrategia >> x.theAvversaria;
//  for(int i=0; i<3; i++)
//    in >> x.theForma[i];
  
//  for(int i=0; i<6; ++i) {
//    in >> a >> b;
//    x.prove[i].first = a;
//    x.prove[i].second = b;
//  }
  
  
//  return in;
//}

}
