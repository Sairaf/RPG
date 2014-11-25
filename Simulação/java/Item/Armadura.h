#ifndef JAVA_ITEM_ARMADURA_H
#define JAVA_ITEM_ARMADURA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "java/lang/String.h"
#include "java/Item/Item.h"
#include "java/Item/Equipamento.h"

namespace java
{
namespace Item
{
class Armadura : public Item, public Equipamento
{
protected:
	int poder_Defesa;


public:
	void Armadura();

	void Armardura(java::lang::String nome, java::lang::String descricao, int b_Atk, int b_Def, int b_Mag, int p_Def);

	void Armadura();

};

}  // namespace Item
}  // namespace java
#endif
