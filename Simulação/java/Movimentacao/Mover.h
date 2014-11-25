#ifndef JAVA_MOVIMENTACAO_MOVER_H
#define JAVA_MOVIMENTACAO_MOVER_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

namespace java
{
namespace Movimentacao
{
class Mover
{
public:
	virtual void Andar()=0;

	virtual void Correr()=0;

	virtual void Pular()=0;

	virtual void Girar()=0;

};

}  // namespace Movimentacao
}  // namespace java
#endif
