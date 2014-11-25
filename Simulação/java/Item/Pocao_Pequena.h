#ifndef JAVA_ITEM_POCAO__PEQUENA_H
#define JAVA_ITEM_POCAO__PEQUENA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "java/lang/String.h"
#include "java/Personagens/Heroi/Heroi.h"

namespace java
{
namespace Item
{
class Pocao_Pequena
{
public:
	void Pocao_Pequena();

	void Pocao_Pequena(java::lang::String nome, java::lang::String descricao);

	void Pocao_Pequena();

	void Recuperar_Hp(java::Personagens::Heroi::Heroi heroi);

};

}  // namespace Item
}  // namespace java
#endif
