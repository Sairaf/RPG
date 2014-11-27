#ifndef JAVA_ELEMENTO_GELO_H
#define JAVA_ELEMENTO_GELO_H

#include "Elemento.h"
#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>


class Gelo: public Elemento
{
 friend ostream& operator<<(ostream&, const Gelo&);
  public:
	Gelo();
	Gelo(string nome);
	Gelo(const Gelo&)
	~Gelo();

    void setNome_Elemento(const string&);
    string getNome_Elemento() const;

   void Add_Efeito()
};


#endif
