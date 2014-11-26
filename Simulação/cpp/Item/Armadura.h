#ifndef JAVA_ITEM_ARMADURA_H
#define JAVA_ITEM_ARMADURA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Item.h"
#include "Equipamento.h"

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

	void Armardura(string nome, string descricao, int b_Atk, int b_Def, int b_Mag, int p_Def);

	void Armadura();

};

}  // namespace Item
}  // namespace java
#endif
