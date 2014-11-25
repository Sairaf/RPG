#ifndef JAVA_ITEM_ITEM_H
#define JAVA_ITEM_ITEM_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "java/lang/String.h"
#include "java/Item/Pocao_Pequena.h"

namespace java
{
namespace Item
{
class Item : public Pocao_Pequena
{
protected:
	java::lang::String nome_Item;

	java::lang::String descricao_Item;

	int durabilidade;


public:
	void Item();

	void Item(java::lang::String nome, java::lang::String descricao);

	void Item();

};

}  // namespace Item
}  // namespace java
#endif
