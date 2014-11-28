#ifndef MAGIA_H
#define MAGIA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Elemento.h"


class Magia
{
friend ostream& operator<<(ostream&, const Magia&)	;
protected:
	string nome_Magia;
	int poder_Magia;
	string descricao_Magia;
	Elemento elemento;

public:
	Magia(string nome: "Magia", int poder_Magia = 10);
	Magia(const string& ,const int& ,const string& ,const Elemento&);
	Magia(const Magia&);
	~Magia();

       void set_Nome_Magia(const string&);
       void set_Poder_Magia(const int&);
       void set_Descricao_Magia(const string&);
       void set_Elemento_Magia(const Elemento&);
       
       string   get_Nome_Magia() const;
       int      get_Poder_Magia() const;
       string   get_Descricao_Magia() const;
       Elemento get_Elemento_Magia() const;
       
       virtual void Add_Poder(const int&) = 0;
};


