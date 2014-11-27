#ifndef MONSTRO_H
#define MONSTRO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Magia.h"

class Monstro 
{
protected:
        string nome_Monstro;
	string descricao_Monstro;
	Magia* Habilidades;
	int HP;
	int MP;
	int ataque;
	int defesa;
	int velocidade;
	int magia;
	static const int max_Hp = 99999;
	static const int max_Mp = 99999;
	


public:
	Monstro(string nome = "Monstro", string descricao = "Descricao");
	Monstro(const string&, const int&, const int&,const int&,const int&,const int&,const int&);
	Monstro(const Monstro&);
	~Monstro();
	
	void Add_Skill(Magia magia);

};

#endif
