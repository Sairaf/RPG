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
	Magia* Tecnica;
public:

	Guerreiro(string nome = "Guerreiro", string descricao = "Descricao");
	Guerreiro(const string& ,const string&, const int&, const int&, const int&, const int&, const int&, const int&);
	~Guerreiro();
	Guerreiro(const Guerreiro&);
	
	void Adicionar_Tecnica(Magia magia);
	void Equipar(const Equipamento&);
 	void Def_Stats();
};

#endif
