#include <cstlib>
#include <iostream>
#include <stdlib.h>

#include "Heroi.h"
#include "Item.h"
#include <vector>

using namespace std;

class Grupo:
{
  friend ostream& operator<<(ostream&, const Grupo&);
  protected:
    vector <Heroi*> grupo;
    vector <Item*> inventario;
  public:
    Grupo();
    Grupo(const Grupo&);
    ~Grupo();
    
    void set_Heroi(const Heroi&);
    void set_Item(const Item&);
    
    <Heroi> get_Heroi() const;
    <Item> get_Item() const;
    
    
    void Menu();
    
  
}

