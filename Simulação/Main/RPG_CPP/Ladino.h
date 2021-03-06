#ifndef LADINO_H
#define LADINO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "monstro.h"
#include "Equipamento.h"
#include "Heroi.h"

class Ladino : public Heroi
{
public:

	Ladino(string nome = "Ladino", string descricao = "Ladino");
	Ladino(const string& ,const string&, const int&, const int&, const int&, const int&, const int&, const int&);
	Ladino(const Ladino&);
	~Ladino();

	void Equipar(const Equipamento&);
    void Roubar(const Monstro&);
    void Subir_De_Nivel(const int&);
};


#endif
