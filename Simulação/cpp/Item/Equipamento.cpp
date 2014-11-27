#include "Equipamento.h"


void Equipamento::Equipamento(int b_Atk)
:Item()
{
 this->bonus_Atk = b_Atk;
 this->bonus_Def = 0;
 this->bonus_Mag = 0;
 this->bonus_Vel = 0;
 this->Efeito_elemental = NULL;	
}

void Equipamento::Equipamento(int b_Def)
:Item()
{
 this->bonus_Atk = 0;
 this->bonus_Def = b_Def;
 this->bonus_Mag = 0;
 this->bonus_Vel = 0;
 this->Efeito_elemental = NULL;	
}


Equipamento::Equipamento(const string& nome,const string& descricao, int b_Atk, int b_Def, int b_Mag, int b_Vel, const Elemento& elemento)
:Item(nome, descricao)
{
 this->bonus_Atk = b_Atk;
 this->bonus_Def = b_Def;
 this->bonus_Mag = b_Mag;
 this->bonus_Vel = b_Vel;
 this->Efeito_elemental = elemento;	
}

void Equipamento::~Equipamento(){
}


void Equipamento::Equipamento(const Equipamento& equipamento_Cpy)
:Item(equipamento_Cpy)
{
 this->bonus_Atk = equipamento_Cpy.bonus_Atk;
 this->bonus_Def = equipamento_Cpy.bonus_Def;
 this->bonus_Mag = equipamento_Cpy.bonus_Mag;
 this->bonus_Vel = equipamento_Cpy.bonus_Vel;
 this->Efeito_elemental = equipamento_Cpy.Efeitoo_elemental;	
}

ostream& operator<<(ostream&, const Equipamento& equipamento){
 output << <static_cast> <const Item&> (equipamento) << "\n";
 output << "Bonus de ataque:" << equipamento.getAtk() << endl;
 output << "Bonus de defesa:" << equipamento.getDef() << endl;
 output << "Bonus de magia:"  << equipamento.getMag() << endl;
 output << "Bonus de velocidade:" << equipamento.getVel() << endl;
 output << "Elemento:" equipamento.getElemento() << endl;
 return output;
}

