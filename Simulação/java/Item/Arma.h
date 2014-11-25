#ifndef JAVA_ITEM_ARMA_H
#define JAVA_ITEM_ARMA_H

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
class Arma : public Item, public Equipamento
{
private:
	int attribute0;


protected:
	int poder_Ataque;


public:
	void Arma();

	void Arma(java::lang::String nome, java::lang::String descricao, int b_Atk, int b_Def, int b_Mag, int p_Atk);

	void Arma();

	void operation0();

};

}  // namespace Item
}  // namespace java
#endif
