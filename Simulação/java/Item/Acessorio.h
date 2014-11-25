#ifndef JAVA_ITEM_ACESSORIO_H
#define JAVA_ITEM_ACESSORIO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "java/lang/String.h"
#include "java/Item/Equipamento.h"
#include "java/Elemento/Elemento.h"

namespace java
{
namespace Item
{
class Acessorio : public Equipamento
{
protected:
	java::Elemento::Elemento Efeito_elemental;


public:
	void Acessorio();

	void Acessorio(java::lang::String nome, java::lang::String descricao, int b_Atk, int b_Def, int b_Mag, int p_Def);

	void Acessorio();

};

}  // namespace Item
}  // namespace java
#endif
