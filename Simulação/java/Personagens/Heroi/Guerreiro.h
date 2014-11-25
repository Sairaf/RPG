#ifndef JAVA_PERSONAGENS_HEROI_GUERREIRO_H
#define JAVA_PERSONAGENS_HEROI_GUERREIRO_H

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
class Guerreiro : public Heroi
{
protected:
	java::Magias::Magia Tecnica;


public:
	void Adicionar_Tecnica(java::Magias::Magia magia);

	void Guerreiro();

	void Guerreiro(java::lang::String nome, int hp, int p, int ataque, int defesa, int magia, int velocidade, int maxHp, int maxMp);

	void Equipar(java::Item::Equipamento equipamento);

	void Guerreiro();

};

}  // namespace Heroi
}  // namespace Personagens
}  // namespace java
#endif
