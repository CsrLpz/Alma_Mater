// Alma Mater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

bool esPar(int);

int main()
{
	int opcion = 0, numero = 0;
	do
	{
		cout << "Ingresa un numero: ";
		cin >> numero;
		if (esPar(numero) == 1)
			cout << "Es par" << endl;
		else
			cout << "No es par" << endl;
		cout << "Desea continuar?\n1. Si\t2. No\nOpcion: ";
		cin >> opcion;
	} while (opcion != 2);
	_getch();
}

bool esPar(int n)
{
	return n % 2 == 0;
}