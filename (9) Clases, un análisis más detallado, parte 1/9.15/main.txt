#include "TresEnRaya.h"
#include <iostream>
using std::cout;
using std::endl;
#include <conio.h>

int main()
{

	TresEnRaya o;
	cout << "\t\tAntes de comenzar\n\n1. Los espacios comienzan de 0 a 2 (3 espacios).\n2. El eje 'y' es negativo.\n\n|Enter| - Entiendo.";
	_getch();
	system("cls");
	o.ingresarDatos();
	_getch();
}