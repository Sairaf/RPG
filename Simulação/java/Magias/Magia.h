#ifndef JAVA_MAGIAS_MAGIA_H
#define JAVA_MAGIAS_MAGIA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "java/lang/String.h"
#include "java/Elemento/Elemento.h"

namespace java
{
namespace Magias
{
class Magia
{
protected:
	java::lang::String nome_Magia;

	int poder_Magia;

	java::lang::String descricao_Magia;

	java::Elemento::Elemento elemento;


public:
	void Magia();

	void Magia(java::lang::String nome, int poder_Magia, java::lang::String descricao, java::Elemento::Elemento elemento);

	void Magia();

};

}  // namespace Magias
}  // namespace java
#endif
