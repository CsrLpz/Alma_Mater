// Alma Mater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int enteroPotencia(int, int);

int main()
{
	int base = 0, exponente = 0;
	cout << "Ingrese una base 'a' y un exponente 'b', por favor" << endl;
	cout << "Base: ";
	cin >> base;
	cout << "Exponente: ";
	cin >> exponente;
	cout << "Resultado: " << enteroPotencia(base, exponente);
	_getch();
}

int enteroPotencia(int a, int b)
{
	int resultado = 1, contador = 0;
	while (contador < b)
	{
		resultado *= a;
		contador++;
	}
	return resultado;
}