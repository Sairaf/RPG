#include "Acessorio.h"

Acessorio::Acessorio(string nome)
:Equipamento(nome);
{
 this->efeito_Secundario = NULL;	
}

Acessorio::Acessorio(string nome, string descricao, int b_Atk, int b_Def, int b_Mag, int p_Def)
:Equipamento(string nome, string descricao, int b_Atk, int b_Def, int b_Mag, int p_Def)
{
 this->efeito_Secundario = NULL;		
}

Acessorio::~Acessorio()
{
 delete [] efeito_Secundario;	
}

Acessorio::Acessorio(const Acessorio& acessorio_Cpy)
:Equipamento(acessorio_Cpy)
{
 this->efeito_Secundario = acessorio_Cpy->efeito_Secundario;		
}

void Acessorio::setElemento_S(const Elemento& efeito){
 if(efeito!= NULL && efeito->!Nome_Elemento.empty() == false){
  this->efeito_Secundario.push_back(efeito);
 }else{
  Elemento aux();	
  this->efeito_Secundario.push_back(aux);	
 }
}

void Acessorio::Add_Elemento(const Elemento& elemento){
  this->setElemento_S(elemento);
}

ostream& operator<<(ostream& output, const Acessorio& aces){
 int cont;
 output << static_cast <const Equipamento&> (Acessorio) << "\n"
 output << "Elementos do Acessorio: "
 for(cont = 0; cont < aces->efeito_Secundario.size();cont++)
 	output << aces->efeito_Secundario[cont] << " ";
 	 output << endl;
 return output;	  	
}
