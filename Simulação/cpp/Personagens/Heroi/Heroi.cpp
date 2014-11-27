#include "Heroi.h"

void Heroi::Heroi(string nome, string descricao)
:nomeHeroi(nome), descricao(descricao)
{
 this->pontosExperiencia = 1000;
 this->arma = NULL;
 this->armadura = NULL;
 this->acessorio = NULL;;
 this->HP = 100;
 this->MP = 100;
 this->ataque = 5;
 int defesa = 5;
 int velocidade = 5;
 int magia = 5
}

Heroi::Heroi(const string& nome, const string& descricao,const int& hp,const int& mp,const int& ataque,const int& defesa,const int& magia,const int& velocidade)
{
 this->nomeHeroi = nome;
 this->descricao = descricao;
 this->pontosExperiencia = 1000;
 this->arma = NULL;
 this->armadura = NULL;
 this->acessorio = NULL;;
 this->HP = hp;
 this->MP = mp;
 this->ataque = ataque;
 this->defesa = defesa;
 this->velocidade = velocidade;
 this->magia = magia;  
}

void Heroi::set_Nome_Heroi(const string& nome){
  if(nome.empty() == false)  
   this->nomeHeroi = nome;
  else
   this->nomeHeroi = "Loto";
}

void Heroi::set_Descricao_Heroi(const string& descricao){
  if(descricao.empty() == false)  
   this->descricao = descricao;
  else
   this->descricao = "NAO INFORMADA";
}

void Heroi::set_HP_Heroi(const int& hp){
  if(hp>= 0)
   this->HP = hp;
  else
   this->HP = 10;
}

void Heroi::set_MP_Heroi(const int& mp){
  if(mp>= 0)
   this->MP = mp;
  else
   this->MP = 10;
}

void Heroi::set_Atk_Heroi(const int& atk){
  if(atk>= 0)
   this->ataque = atk;
  else
   this->ataque = 5;
}

void Heroi::set_Def_Heroi(const int& def){
  if(def>= 0)
   this->defesa = def;
  else
   this->defesa = 5;
}

void Heroi::set_Mag_Heroi(const int& mag){
  if(mag>= 0)
   this->magia = mag;
  else
   this->magia = 5;
}

void Heroi::set_Vel_Heroi(const int& vel){
  if(vel>= 0)
   this->velocidade = vel;
  else
   this->velocidade = 5;
}

string Heroi::get_Nome_Heroi() const{
  return this->nomeHeroi;
}

string Heroi::get_Descricao_Heroi() const{
  return this->descricao
}
int get_HP_Heroi() const;
int get_MAX_HP_Heroi() const;
int get_MP_Heroi() const;
int get_MAX_MP_Heroi() const;
int get_Atk_Heroi() const;
int get_Def_Heroi() const;
int get_Mag_Heroi() const;
int get_Vel_Heroi() const;


void Heroi::Subir_de_Nivel(const int& experiencia)
{
}

void Heroi::Equipar(java::Item::Equipamento equipamento)
{
}

void Heroi::Personagem()
{
}

