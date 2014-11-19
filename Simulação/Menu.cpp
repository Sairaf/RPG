#include "Menu.h"

void Menu::Menu_Principal(){
	int opcao;
	
	cout << "     ====================================================" << endl;
	cout << "                    Titulo do jogo                       " << endl; 
	cout << "     ====================================================" << endl;
	cout << endl << endl;
	cout << "1 - Iniciar jogo" << endl;
	cout << "2 - Continuar Jogo" << endl;
	cout << "3 - Sair" << endl;
	cout << endl << endl;
	cout << "Escolha uma das opcoes abaixo" << endl;
	
	cin >> opcao;
	while(opcao != 3){
	switch(opcao){
	 case 1:
			cout << "Iniciando jogo. " << endl;
			opcao = 3;
			break;
     case 2:
			cout << "Continuando jogo. " << endl;	  
			opcao = 3;
			break;
     case 3:		
			cout << "Saindo do programa" << endl;	
			break;
	 default:
     system("cls");
	 cout << "Opcao invalida. Por favor digite novamente sa opcao";
	 cin >> opcao;
	}
		
 }
 
 
}

void Menu::teste(){
  cout	<< "hello" << endl;	 
 }