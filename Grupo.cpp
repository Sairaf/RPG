#include "Grupo.h"
/*
-int main(void)
-{/*
- Servico* t = new ServicoStreaming("P", "T");
 
-ServicoStreaming * strPtr = dynamic_cast<ServicoStreaming *>(t);
-if (strPtr != 0)
-{
- cout << strPtr[0];
-}
-*/


Grupo::Grupo()
{
 this->grupo = new Heroi;
 this->inventario = new Item;
}


Grupo::Grupo(const Grupo& grupo_Cpy)
{
 this->grupo = grupo_Cpy.Heroi;
 this->inventario = grupo_Cpy.Item;
}

Grupo::Grupo(const vector <Heroi*>& grupo, const vector <Item*>& inventario){
this->grupo = grupo;
this->inventario = inventario;
}

void Grupo::set_Heroi(const Heroi& heroi){
 if(this->heroi != NULL && this->grupo.size() < this->MAX_HEROIS)
   this->grupo.push_back(heroi);
}

void Grupo::set_Item(const Item& item){
 if(item != NULL && this->inventario.size() < this->MAX_Itens)
   this->inventario.push_back(item);
}

<Heroi> Grupo::get_Grupo() const{

 return this->grupo;
}

<Item> Grupo::get_Inventario() const{

 return this->inventario;
}

ostream& operator<<(ostream& output, const Grupo& gruppo)
{
 int i ;
 for(i = 0; i < this->grupo.size(); i++)
 {
  output << this->grupo[i] << endl;
 }
 for(i = 0; i < this->inventario.size(); i++)
 {
  output << this->inventario[i] << endl;
 }
}

void Grupo::Text_Menu()
{
 cout << "1 - Mostrar inventario"  << endl;
 cout << "2 - Mostrar status dos personagens" << endl;
 cout << "3 - Sair" endl;
}


void Grupo::Menu()
{
 int opcao;
 this->Text_Menu();
 cin >> opcao;
 switch(opcao)
 case: 1
 break;
 case 2:
 break;
 case3:
 
 break;
 default:
 system("cls");
 cout >> "Opcao invalida" << endl;;
 this->Text_Menu)(;
 cin >> opcao;)
}
