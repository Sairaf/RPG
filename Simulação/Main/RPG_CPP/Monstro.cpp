#include "Monstro.h"


Monstro::Monstro(string nome, string descricao)
:nome_Monstro(nome), descricao_Monstro(descricao)
{

 this->Habilidades = new Magia;
 this->set_HP_Monstro(100);
 this->set_MP_Monstro(100);
 this->set_Atk_Monstro(10);
 this->set_Def_Monstro(10);
 this->set_Mag_Monstro(5);
 this->set_Vel_Monstro(5);
}

Monstro::Monstro(const string& nome,const string& descricao_Monstro, const int& hp, const int& mp, const int& ataque, const int& defesa, const int& magia, const int& velocidade)
{
 this->Habilidades = new Magia;
 this->set_HP_Monstro(100);
 this->set_MP_Monstro(100);
 this->set_Atk_Monstro(10);
 this->set_Def_Monstro(10);
 this->set_Mag_Monstro(5);
 this->set_Vel_Monstro(5);
}

Monstro::~Monstro()
{
 delete [] this->Habilidades;
}

void Monstro::Add_Skill(Magia magia)
{
}
