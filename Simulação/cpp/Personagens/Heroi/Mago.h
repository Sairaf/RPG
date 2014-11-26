#ifndef JAVA_PERSONAGENS_HEROI_MAGO_H
#define JAVA_PERSONAGENS_HEROI_MAGO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Equipamento.h"
#include "Magia.h"
#include "Heroi.h"

namespace java
{
namespace Personagens
{
namespace Heroi
{
class Mago : public Heroi
{
protected:
	Magia lista_Magias;


public:
	void Adicionar_Magia();

	void Mago();

	void Mago(string nome, int hp, int p, int ataque, int defesa, int magia, int velocidade, int maxHp, int maxMp);

	void Equipar(const Equipamento&);

	void Mago();

};

}  // namespace Heroi
}  // namespace Personagens
}  // namespace java
#endif
