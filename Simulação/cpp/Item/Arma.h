#ifndef ARMA_H
#define ARMA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Equipamento.h"

using namespace std;
class Arma : public Equipamento
{
protected:
	int poder_Ataque;


public:
	void Arma();

	void Arma(string nome,string descricao, int b_Atk, int b_Def, int b_Mag, int p_Atk);

	void Arma();
	

};

}  // namespace Item
}  // namespace java
#endif
