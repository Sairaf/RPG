#ifndef JAVA_PERSONAGENS_HEROI_GUERREIRO_H
#define JAVA_PERSONAGENS_HEROI_GUERREIRO_H

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
class Guerreiro : public Heroi
{
protected:
	Magia Tecnica;


public:
	void Adicionar_Tecnica(Magia magia);

	void Guerreiro();

	void Guerreiro(string nome, int hp, int p, int ataque, int defesa, int magia, int velocidade, int maxHp, int maxMp);

	void Equipar(const Equipamento&);

	void Guerreiro();

};

}  // namespace Heroi
}  // namespace Personagens
}  // namespace java
#endif
