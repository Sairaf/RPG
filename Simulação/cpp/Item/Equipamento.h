#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Item.h"
#include "Elemento.h"

class Equipamento : public Item
{
protected:
	int bonus_Atk;
	int bonus_Def;
	int bonus_Mag;
	int bonus_Vel;
	Elemento Efeito_elemental;


public:
	Equipamento(int p_Atk = 0);
	Equipamento(int p_Def = 0);
	Equipamento(const string nome, string descricao, int b_Atk, int b_Def, int b_Mag, int b_Vel),const Elemento&;
	~Equipamento();

	virtual void Add_Efeito(java::Elemento::Elemento elemento) = 0;

	

};


#endif
