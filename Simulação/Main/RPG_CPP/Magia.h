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
	string elemento;
public:
	Magia(string nome= "Magia", int poder_Magia = 10);
	Magia(const string& ,const int& ,const string& ,const string&);
	Magia(const Magia&);
	~Magia();

       void set_Nome_Magia(const string&);
       void set_Poder_Magia(const int&);
       void set_Descricao_Magia(const string&);
       void set_Elemento_Magia(const string&);

       string   get_Nome_Magia() const;
       int      get_Poder_Magia() const;
       string   get_Descricao_Magia() const;
       string   get_Elemento_Magia() const;

       bool operator==(const Magia&);
       Magia* operator=(const Magia&);
       bool operator!=(const Magia&);
       void Add_Poder(const int&);
};


