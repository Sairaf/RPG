#ifndef ACESSORIO_H
#define ACESSORIO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Equipamento.h"
#include "Elemento.h"

using namespace std;


class Acessorio : public Equipamento
{
 friend ostream& operator<<(ostream&, const Acessorio&);
 protected:
	vector <Elemento> efeito_Secundario(10);

 public:
	Acessorio(string nome = "Desconhecido");
	Acessorio(const string& nome,const string& descricao,const int& b_Atk,const int& b_Def,const int& b_Mag,const int& b_Vel);
	Acessorio(const Acessorio&);
	~Acessorio();
	
	void setElemento_S(const Elemento&);
	
	<Elemento> getElemento() const;
	Elemento   getElemento_Pos(const int&) const;
	
	Elemento* operator=(const Elemento&);
    void Add_Elemento(const Elemento&);
};

#endif
