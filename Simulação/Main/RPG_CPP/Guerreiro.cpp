#include "Guerreiro.h"

Guerreiro::Guerreiro(string nome, string descricao)
:Heroi(nome,descricao)
{
  this->Tecnica = new Magia();
}

Guerreiro::Guerreiro(const string& nome,const string& descricao,const int& hp,const int& mp,const int& ataque,const int& defesa, const int& magia,const int& velocidade)
:Heroi(nome, descricao, hp, mp, ataque, defesa, magia, velocidade)
{
 this->Tecnica = new Magia();  
}

Guerreiro::~Guerreiro(){
  delete [] this->Tecnica;
}

void Guerreiro::Adicionar_Tecnica(const Magia& magia)
{
     Magia magia2;
 if(magia != magia2)  {
   this->Tecnica = new Magia;
   
 }
}




void Guerreiro::Equipar(const Equipamento& equipamento)
{
}


