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
friend ostream& operator<<(ostream&, const Equipamento&);
protected:
	int bonus_Atk;
	int bonus_Def;
	int bonus_Mag;
	int bonus_Vel;
	//Elemento* Efeito_elemental;


public:
	Equipamento(string nome = "Equipamento", string descricao = "**********");
	Equipamento(int bonus = 0);
	Equipamento(const Equipamento&);
	Equipamento(const string& nome,const string& descricao, int b_Atk, int b_Def, int b_Mag, int b_Vel);
	~Equipamento();

	void setAtk(const int&);
	void setDef(const int&);
	void setMag(const int&);
	void setVel(const int&);
	//void setEfeito(const Elemento&);

	int getAtk() const;
	int getDef() const;
	int getMag() const;
	int getVel() const;
	//Elemento* getElemento() const;

	virtual void Add_Bonus(const int&) = 0;
	//virtual void Add_Efeito(const Elemento& elemento) = 0;



};


#endif
