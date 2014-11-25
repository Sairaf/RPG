#ifndef JAVA_ELEMENTO_ELEMENTO_H
#define JAVA_ELEMENTO_ELEMENTO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "java/lang/String.h"

namespace java
{
namespace Elemento
{
class Elemento
{
protected:
	java::lang::String nome_Elemento;


public:
	void Elemento();

	void Elemento(java::lang::String nome);

	void Elemento();

};

}  // namespace Elemento
}  // namespace java
#endif
