#ifndef JAVA_ITEM_ITEM__CURA_H
#define JAVA_ITEM_ITEM__CURA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "java/lang/String.h"
#include "java/Item/Item.h"

namespace java
{
namespace Item
{
class Item_Cura : public Item
{
public:
	virtual void Add_Efeito()=0;

	void Item_Cura();

	void Item_Cura(java::lang::String nome, java::lang::String descricao);

	void Item_Cura();

};

}  // namespace Item
}  // namespace java
#endif
