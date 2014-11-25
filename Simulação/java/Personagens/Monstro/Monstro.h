#ifndef JAVA_PERSONAGENS_MONSTRO_MONSTRO_H
#define JAVA_PERSONAGENS_MONSTRO_MONSTRO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "java/lang/String.h"
#include "java/Magias/Magia.h"
#include "java/Personagens/Atributos.h"

namespace java
{
namespace Personagens
{
namespace Monstro
{
class Monstro : public java::Personagens::Atributos
{
protected:
	java::Magias::Magia Habilidades;

	int HP;

	int MP;

	int ataque;

	int defesa;

	int velocidade;

	int magia;

	int max_Hp;

	int max_Mp;

	java::lang::String nomeHeroi;

	java::lang::String descricao;


public:
	void Monstro();

	void Monstro(java::lang::String nome, int hp, int p, int ataque, int defesa, int magia, int velocidade, int maxHp, int maxMp);

	void Monstro();

	void Add_Skill(java::Magias::Magia magia);

};

}  // namespace Monstro
}  // namespace Personagens
}  // namespace java
#endif
