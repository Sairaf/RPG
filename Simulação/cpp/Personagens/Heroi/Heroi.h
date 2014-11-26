#ifndef JAVA_PERSONAGENS_HEROI_HEROI_H
#define JAVA_PERSONAGENS_HEROI_HEROI_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Armadura.h"
#include "Equipamento.h"
#include "Mover.h"
#include "Atributos.h"
#include "Arma.h"
#include "Acessorio.h"

namespace java
{
namespace Personagens
{
namespace Heroi
{
class Heroi : 
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
