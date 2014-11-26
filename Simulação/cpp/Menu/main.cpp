#include <stdio.h>
#include "Menu.h"

int main(int argc, char **argv)
{
	Menu* teste = new Menu();
	teste->Menu_Principal();
	teste->Menu_Escolha_Personagem();
	system("pause");
	return 0;
}
