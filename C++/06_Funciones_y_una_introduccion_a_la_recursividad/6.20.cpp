// Alma Mater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

bool multiple(int, int);

int main()
{
	int entero1, entero2;
	cout << "Ingrese un par de enteros" << endl;
	cout << "Entero 1: ";
	cin >> entero1;
	cout << "Entero 2: ";
	cin >> entero2;
	cout << "Resultado 1 = Multiplo, 2 = No es multiplo: " << multiple(entero1, entero2);
	_getch();
}

bool multiple(int e1, int e2)
{
	int grial = 0;
	while (grial < e1)
	{
		if (e2*grial == e1)
			return true;
		else
			grial++;
	}
}