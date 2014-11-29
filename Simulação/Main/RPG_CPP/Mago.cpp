#include "Mago.h"

void Mago::Adicionar_Magia( const Magia& magia)
{
 int i = 0;
 Magia* aux_Magia = new Magia[this->num_Magia];
 if(this->num_Magia == 0){
 ++this->num_Magia;
 this->lista_Magias[this->num_Magia-1] == magia;
 }else{

  for(i = 0; i < this->num_Magia; i++)
    aux_Magia[i] = this->lista_Magias[i];

 delete [] this->lista_Magias;

 this->lista_Magias = new Magia[++this->num_Magia];

  for(i = 0; i < this->num_Magia-1; i++)
    this->lista_Magias[i] = aux_Magia[i];

    this->lista_Magias[this->num_Magia-1] = magia;

 }

}

Mago::Mago(string nome, string descricao)
:Heroi(nome, descricao)
{
 this->lista_Magias = new Magia;
}

Mago::Mago(const string& nome,const string& descricao, const int& hp, const int& mp, const int& ataque, const int& defesa, const int& magia, const int& velocidade)
:Heroi(nome, descricao, hp, mp, ataque, defesa, magia, velocidade)
{
 this->lista_Magias = new Magia;
}
/*
void Mago::Equipar(java::Item::Equipamento equipamento)
{
}

*/
