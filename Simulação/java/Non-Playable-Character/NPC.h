#ifndef JAVA_NON-PLAYABLE-CHARACTER_N_P_C_H
#define JAVA_NON-PLAYABLE-CHARACTER_N_P_C_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "java/lang/String.h"
#include "java/Movimentacao/Mover.h"

namespace java
{
namespace Non-Playable-Character
{
class NPC : public java::Movimentacao::Mover
{
protected:
	java::lang::String nome_NPC;

	java::lang::String mensagem;


public:
	void Andar();

	void Correr();

	void Pular();

	void Girar();

	void Mostrar_Mensagem();

	void NPC();

	void NPC();

	void NPC(java::lang::String nome, java::lang::String mensagem);

};

}  // namespace Non-Playable-Character
}  // namespace java
#endif
