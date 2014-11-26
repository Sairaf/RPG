#ifndef JAVA_MAGIAS_MAGIA_H
#define JAVA_MAGIAS_MAGIA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Elemento.h"

namespace java
{
namespace Magias
{
class Magia
{
protected:
	string nome_Magia;

	int poder_Magia;

	string descricao_Magia;

	Elemento elemento;


public:
	void Magia();

	void Magia(string nome, int poder_Magia, string descricao, Elemento elemento);

	void Magia();

};

}  // namespace Magias
}  // namespace java
#endif
