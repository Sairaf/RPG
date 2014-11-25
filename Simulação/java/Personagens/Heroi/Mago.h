#ifndef JAVA_PERSONAGENS_HEROI_MAGO_H
#define JAVA_PERSONAGENS_HEROI_MAGO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "java/lang/String.h"
#include "java/Item/Equipamento.h"
#include "java/Magias/Magia.h"
#include "java/Personagens/Heroi/Heroi.h"

namespace java
{
namespace Personagens
{
namespace Heroi
{
class Mago : public Heroi
{
protected:
	java::Magias::Magia lista_Magias;


public:
	void Adicionar_Magia();

	void Mago();

	void Mago(java::lang::String nome, int hp, int p, int ataque, int defesa, int magia, int velocidade, int maxHp, int maxMp);

	void Equipar(java::Item::Equipamento equipamento);

	void Mago();

};

}  // namespace Heroi
}  // namespace Personagens
}  // namespace java
#endif
