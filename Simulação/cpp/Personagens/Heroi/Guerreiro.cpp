#include "Guerreiro.h"

Guerreiro::Guerreiro(string nome, string descricao)
:Heroi(nome,descricao)
{
  this->Tecnica = NULL;
}

Guerreiro::Guerreiro(const string& nome,const int& hp,const int& mp,const int& ataque,const int& defesa, const int& magia,const int& velocidade)
:Heroi(nome, hp, mp, ataque, defesa, magia, velocidade)
{
 this->tecnica = NULL;  
}

Guerreiro::~Guerreio(){
  delete [] this->Tecnica;
}

void Guerreiro::Adicionar_Tecnica(Magia magia)
{
 if(magia != null)  {
   this->Tecnica = new Magia;
   
 }
}




void Guerreiro::Equipar(const Equipamento& equipamento)
{
}


