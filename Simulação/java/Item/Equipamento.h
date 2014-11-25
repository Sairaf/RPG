#ifndef JAVA_ITEM_EQUIPAMENTO_H
#define JAVA_ITEM_EQUIPAMENTO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "java/lang/Void.h"
#include "java/lang/String.h"
#include "java/Item/Item.h"
#include "java/Elemento/Elemento.h"

namespace java
{
namespace Item
{
class Equipamento : public Item
{
protected:
	int bonus_Atk;

	int bonus_Def;

	int bonus_Mag;

	int bonus_Vel;

	java::Elemento::Elemento Efeito_elemental;


public:
	void Equipamento();

	java::lang::Void Equipamento(java::lang::String nome, java::lang::String descricao, int b_Atk, int b_Def, int b_Mag, int b_Vel);

	void Add_Efeito(java::Elemento::Elemento elemento);

	void Equipamento();

};

}  // namespace Item
}  // namespace java
#endif
