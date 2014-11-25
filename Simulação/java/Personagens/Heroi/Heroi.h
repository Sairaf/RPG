#ifndef JAVA_PERSONAGENS_HEROI_HEROI_H
#define JAVA_PERSONAGENS_HEROI_HEROI_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "java/lang/String.h"
#include "java/Item/Armadura.h"
#include "java/Item/Equipamento.h"
#include "java/Movimentacao/Mover.h"
#include "java/Personagens/Atributos.h"
#include "java/Personagens/Heroi/Arma.h"
#include "java/Personagens/Heroi/Acessorio.h"

namespace java
{
namespace Personagens
{
namespace Heroi
{
class Heroi : public java::Personagens::Atributos, public java::Movimentacao::Mover
{
protected:
	java::lang::String nomeHeroi;

	java::lang::String descricao;

	int pontosExperiencia;

	Arma arma;

	java::Item::Armadura armadura;

	Acessorio acessorio;

	int HP;

	int MP;

	int ataque;

	int defesa;

	int velocidade;

	int magia;

	int max_Hp;

	int max_Mp;


public:
	void Heroi();

	void Heroi(java::lang::String nome, int hp, int p, int ataque, int defesa, int magia, int velocidade, int maxHp, int maxMp);

	void Subir_de_Nivel();

	void Equipar(java::Item::Equipamento equipamento);

	void Personagem();

};

}  // namespace Heroi
}  // namespace Personagens
}  // namespace java
#endif
