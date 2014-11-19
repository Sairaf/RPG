#ifndef HEROI_H
#define HEROI_H

#include <iostream>
#include <cstlib>
#include <string>

using namespace std;

class Heroi:  public Atributos{
 protected:
           String nome;
	   String descricao;   
           int pontos_Experiencia;
           Arma arma;
           Armadura armadura;
           Acessorio acessorio;       

           void Equipar(const Equipamento&);
           void Subir_Nivel();
}

#endif