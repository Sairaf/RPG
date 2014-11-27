#ifndef HEROI_H
#define H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Armadura.h"
#include "Equipamento.h"
#include "Mover.h"
#include "Atributos.h"
#include "Arma.h"
#include "Acessorio.h"

class Heroi : 
{
protected:
	string nomeHeroi;
	string descricao;
	int pontosExperiencia;
	
	Arma arma;
	Armadura armadura;
	Acessorio acessorio;

	int HP;
	int MP;
	int ataque;
	int defesa;
	int velocidade;
	int magia;
	static const  int max_Hp = 9999;
	static const  int max_Mp = 9999;

public:
	Heroi(string nome = "HERO", string descricai = "UM HEROI");
	Heroi(const string& nome,const string& descricao, int hp, int mp, int ataque, int defesa, int magia, int velocidade);
	
	void set_Nome_Heroi(const string&);
	void set_Descricao_Heroi(const string&);
	void set_HP_Heroi(const int&);
	void set_MP_Heroi(const int&);
	void set_Atk_Heroi(const int&);
	void set_Def_Heroi(const int&);
	void set_Mag_Heroi(const int&);
	void set_Vel_Heroi(const int&);
	
	string get_Nome_Heroi() const;
	string get_Descricao_Heroi() const;
	int    get_HP_Heroi() const;
	int    get_MAX_HP_Heroi() const;
	int    get_MP_Heroi() const;
	int    get_MAX_MP_Heroi() const;
	int    get_Atk_Heroi() const;
	int    get_Def_Heroi() const;
	int    get_Mag_Heroi() const;
	int    get_Vel_Heroi() const;
	
	void Subir_de_Nivel();
	void Equipar(Equipamento equipamento);

};


#endif
