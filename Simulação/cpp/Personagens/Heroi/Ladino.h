#ifndef JAVA_PERSONAGENS_HEROI_LADINO_H
#define JAVA_PERSONAGENS_HEROI_LADINO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Equipamento.h"
#include "Heroi.h"


namespace java
{
namespace Personagens
{
namespace Heroi
{
class Ladino : public Heroi
{
public:
	void Roubar(Monstro monstro);

	void Ladino();

	void Ladino(String nome, int hp, int p, int ataque, int defesa, int magia, int velocidade, int maxHp, int maxMp);

	void Equipar(const Equipamento&);

	void ladino();

};

}  // namespace Heroi
}  // namespace Personagens
}  // namespace java
#endif
