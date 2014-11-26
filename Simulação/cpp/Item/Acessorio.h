#ifndef JAVA_ITEM_ACESSORIO_H
#define JAVA_ITEM_ACESSORIO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>


#include "Equipamento.h"
#include "Elemento.h"

namespace java
{
namespace Item
{
class Acessorio : public Equipamento
{
protected:
	Elemento Efeito_elemental;


public:
	void Acessorio();

	void Acessorio(string nome, string descricao, int b_Atk, int b_Def, int b_Mag, int p_Def);

	void Acessorio();

};

}  // namespace Item
}  // namespace java
#endif
