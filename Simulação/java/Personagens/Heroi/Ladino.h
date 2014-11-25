#ifndef JAVA_PERSONAGENS_HEROI_LADINO_H
#define JAVA_PERSONAGENS_HEROI_LADINO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "java/lang/String.h"
#include "java/Item/Equipamento.h"
#include "java/Personagens/Heroi/Heroi.h"
#include "java/Personagens/Heroi/Monstro.h"

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

	void Ladino(java::lang::String nome, int hp, int p, int ataque, int defesa, int magia, int velocidade, int maxHp, int maxMp);

	void Equipar(java::Item::Equipamento equipamento);

	void ladino();

};

}  // namespace Heroi
}  // namespace Personagens
}  // namespace java
#endif
