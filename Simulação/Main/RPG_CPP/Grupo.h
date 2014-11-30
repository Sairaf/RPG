#include <cstlib>
#include <iostream>
#include <stdlib.h>

#include "Heroi.h"
#include "Item.h"
#include <vector>
#include "Monstro.h"
using namespace std;

class Grupo:
{
  friend ostream& operator<<(ostream&, const Grupo&);
  protected:
    const  int MAX_HEROIS = 4;
    const  int MAX_ITENS = 99;
    vector <Heroi*> grupo;
    vector <Item*> inventario;
  public:
    Grupo();
    Grupo(const vector <Heroi*>&, const vector <Item*>&);
    Grupo(const Grupo&);
    ~Grupo();
    
    void set_Heroi(const Heroi&);
    void set_Item(const Item&);
    void Batalhar(const Monstro&);
    <Heroi> get_Grupo() const;
    <Item> get_Inventario() const;
    
    
    void Menu();
    
  
}

