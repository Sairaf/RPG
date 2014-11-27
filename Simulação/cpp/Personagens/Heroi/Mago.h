#ifndef MAGO_H
#define MAGO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Equipamento.h"
#include "Magia.h"
#include "Heroi.h"

class Mago : public Heroi
{
protected:
	Magia* lista_Magias;


public:

	Mago();
	Mago(string nome, int hp, int p, int ataque, int defesa, int magia, int velocidade, int maxHp, int maxMp);
	Mago(const Mago&);
	~Mago(); 
	
	void set_Magia_Mago(const Magia&);
	
	Magia* get_Magias_Mago() const;
	Magia  get_Magia_Mago(const int&) const;
	
	void Equipar(const Equipamento&);
	void Adicionar_Magia(const Magia&);

};


#endif
