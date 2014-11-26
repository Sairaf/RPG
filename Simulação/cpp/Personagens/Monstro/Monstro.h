#ifndef JAVA_PERSONAGENS_MONSTRO_MONSTRO_H
#define JAVA_PERSONAGENS_MONSTRO_MONSTRO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Magia.h"


namespace java
{
namespace Personagens
{
namespace Monstro
{
class Monstro 
{
protected:
	Magia Habilidades;

	int HP;

	int MP;

	int ataque;

	int defesa;

	int velocidade;

	int magia;

	int max_Hp;

	int max_Mp;

	string nomeHeroi;

	string descricao;


public:
	void Monstro();

	void Monstro(string nome, int hp, int p, int ataque, int defesa, int magia, int velocidade, int maxHp, int maxMp);

	void Monstro();

	void Add_Skill(Magia magia);

};

}  // namespace Monstro
}  // namespace Personagens
}  // namespace java
#endif
