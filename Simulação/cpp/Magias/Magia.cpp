#include "Magia.h"

Magia::Magia(string nome, int poder)
:nome_Magia(nome), poder_Magia(poder)
{
 this->descricao = "Desconhecida"  ;
 this->elemento = NULL;
}

Magia::Magia(const string& nome, const int& poder_Magia, const string& descricao, const Elemento& elemento)
{
  this->nome_Magia = nome;
  this->poder_Magia = poder_Magia;
  this->descricao = descricao;
  this->elemento = elemento;
}

Magia::Magia(const Magia& magia_Cpy){
  this->nome_Magia = magia_Cpy.nome_Magia;
  this->poder_Magia = magia_Cpy.poder_Magia;
  this->descricao = magia_Cpy.descricao
  this->elemento = magia_Cpy.elemento;
}

Magia::~Magia()
{
}

void Magia::set_Nome_Magia(const string& nome){
  if(nome.empty() == false){
    this->nome_Magia = nome;
  }else{
    this->nome_Magia = "LeMagia";
  }
}

void Magia::set_Poder_Magia(const int& poder){
  if(poder >= 0){
   this->poder_Magia = poder;  
  }else{
   this->poder_Magia = 0; 
  }
}

void Magia::set_Descricao_Magia(const string& descricao){
  if(descricao.empty() == false){
    this->descricao = descricao;
  }else{
    this->descricao = "Nao possui"
  }
}

void Magia::set_Elemento_Magia(const Elemento& elemento){
  string aux = elemento.getNome_Elemento;
  if(elemento != null && aux.empty() == false)
   this->elemento = elemento;
  else
   this->elemento = NULL;
}

string Magia::get_Nome_Magia() const{
  return this->nome_Magia;
}

int Magia::get_Poder_Magia() const{
  return this->poder_Magia;
}

string Magia::get_Descricao_Magia() const{
  return this->descricao;
}

Elemento get_Elemento_Magia() const{
  return this->elemento ;
}

ostream& operator<<(ostream& output, const Magia& magia){
  output << "Nome da magia: " << magia.get_Nome_Magia() << endl;
  output << "Descricao: " << magia.get_Descricao_Magia() << endl;
  output << "Poder da magia: " << magia.getPoder_Magia() << endl;
  output << "Elemento da magia" << magia.elemento.getNome_Elemento() << endl;
  return output;
}
