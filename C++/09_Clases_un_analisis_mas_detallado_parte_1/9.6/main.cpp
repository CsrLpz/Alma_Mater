#include "Racional.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <conio.h>

int main()
{
	int opcion = 0;
	Racional fraccion;
	cout << "\t\tIngrese un opcion.\n" << endl;
	cout << "1. Suma.\n2. Resta.\n3. Multiplicacion.\n4. Division." << endl;
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		cout << "\t\tSUMA\n\n";
		fraccion.suma();
		break;
	case 2:
		cout << "\t\tRESTA\n\n";
		fraccion.resta();
		break;
	case 3:
		cout << "\t\tMULTIPLICACION\n\n";
		fraccion.multiplicacion();
		break;
	case 4:
		cout << "\t\tDIVISION\n\n";
		fraccion.division();
		break;
	}
	_getch();
}