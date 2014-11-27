#ifndef LADINO_H
#define LADINO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Equipamento.h"
#include "Heroi.h"

class Ladino : public Heroi
{
public:
	
	Ladino(string nome = "Ladino", string descricao = "Ladino");
	Ladino(String nome, int hp, int Mp, int ataque, int defesa, int magia, int velocidade, int maxHp, int maxMp);
	Ladino(const Ladino&);
	~Ladino();
	
	void Equipar(const Equipamento&);
        void Roubar(Monstro monstro);
        void Def_Stats();
};


#endif
