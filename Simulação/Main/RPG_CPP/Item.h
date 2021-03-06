#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

using namespace std;

class Item
{
friend ostream& operator<<(ostream&, const Item&);
protected:
	string nome_Item;
	string descricao_Item;
	int durabilidade;

public:
	Item(string nome = "Item", string descricao = "Um item");
	Item(const string& nome,const string& descricao, const int& durabilidade);
	Item(const Item&);
	~Item();

	void set_Nome_Item(const string&);
	void set_Descricao_Item(const string&);
	void set_Durabilidade(const int&);

	string get_Nome_Item() const;
	string get_Descricao_Item() const;
	int    get_Durabilidade() const;

	virtual void Diminuir_Durabilidade() = 0;

};


#endif
