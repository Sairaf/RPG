#ifndef JAVA_ITEM_ARMA_H
#define JAVA_ITEM_ARMA_H

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
class Arma : public Item, public Equipamento
{
protected:
	int poder_Ataque;


public:
	void Arma();

	void Arma(string nome,string descricao, int b_Atk, int b_Def, int b_Mag, int p_Atk);

	void Arma();
	

};

}  // namespace Item
}  // namespace java
#endif
