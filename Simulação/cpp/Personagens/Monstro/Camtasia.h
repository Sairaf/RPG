#ifndef CAMTASIA_H
#define CAMTASIAH

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Magia.h"

using namespace std;
class Camtasia: public Monstro
{
protected:
	vector <Magia> Habilidades(4);
	int HP;
	int MP;
	int ataque;
	int defesa;
	int velocidade;
	int magia;
	int max_Hp;
	int max_Mp;
	string nome_Monstro;
	string descricao;
	Magia Raio_De_Gelo;

public:
	Camtasia(string nome = "CAMTASIA");
    Camtasia(string nome, int hp, int p, int ataque, int defesa, int magia, int velocidade, int maxHp, int maxMp);
	~Camtasia();
	Camtasia(const Camtasia&)

	void Add_Skill(const Magia&);

};

#endif
