#ifndef GUERREIRO_H
#define GUERREIRO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Equipamento.h"
#include "Magia.h"
#include "Heroi.h"


class Guerreiro : public Heroi
{
protected:
	Magia Tecnica;
public:

	void Guerreiro();
	void Guerreiro(string nome, int hp, int p, int ataque, int defesa, int magia, int velocidade, int maxHp, int maxMp);
	
	void Adicionar_Tecnica(Magia magia);
	void Equipar(const Equipamento&);
	void Guerreiro();
 	void Def_Stats();
};

#endif
