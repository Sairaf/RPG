#ifndef ARMADURA_H
#define ARMADURA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Equipamento.h"


class Armadura : public Equipamento
{
 friend ostream& operator<<(ostream&, const Armadura&);
 protected:
	int poder_Defesa;
	Elemento elemento;
public:
	Armadura(int b_Defesa = 0);
	Armardura(const string& nome,const string& descricao,const int& b_Atk,const& int b_Def,const& int b_Mag,const Elemento&, const int& p_Def);
	~Armadura();

	void set_P_Def(const int&);
	int get_P_Def() const;
	
	virtual Add_Bonus(const int&) = 0;
};

#endif
