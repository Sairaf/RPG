#ifndef JAVA_ITEM_POCAO__PEQUENA_H
#define JAVA_ITEM_POCAO__PEQUENA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Heroi.h"

namespace java
{
namespace Item
{
class Pocao_Pequena
{
public:
	void Pocao_Pequena();

	void Pocao_Pequena(string nome, string descricao);

	void Pocao_Pequena();

	void Recuperar_Hp(const Heroi&);

};

}  // namespace Item
}  // namespace java
#endif
