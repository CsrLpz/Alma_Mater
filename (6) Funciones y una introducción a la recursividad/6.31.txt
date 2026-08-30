// Alma Mater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

void valor(int);

int main()
{
	int numero = 0;
	cout << "Escriba un valor (Max 5 cifras) entero y devolvere el valor invertido" << endl;
	cout << "\n\nNumero: ";
	cin >> numero;
	valor(numero);
	_getch();
}

void valor(int n)
{
	int u = 0, d = 0, c = 0, um = 0, dm = 0;
	if (n > 0 && n < 10)
		cout << "\nRespuesta: " << n;
	else if (n > 0 && n < 100)
	{
		d = n / 10;
		u = n % 10;
		cout << "Respuesta: " << u << d;
	}
	else if (n > 0 && n < 1000)
	{
		c = n / 100;
		d = (n % 100) / 10;
		u = (n % 100) % 10;
		cout << "Respuesta: " << u << d << c;
	}
	else if (n > 0 && n < 10000)
	{
		um = n / 1000;
		c = (n % 1000) / 100;
		d = ((n % 1000) % 100) / 10;
		u = ((n % 1000) % 100) % 10;
		cout << "Respuesta: " << u << d << c << um;
	}
	else if (n > 0 && n < 100000)
	{
		dm = n / 10000;
		um = (n % 10000) / 1000;
		c = ((n % 10000) % 1000) / 100;
		d = (((n % 10000) % 1000) % 100) / 10;
		u = (((n % 10000) % 1000) % 100) % 10;
		cout << "Respuesta: " << u << d << c << um << dm;
	}
	else
		cout << "No puedes ingresar un numero mayor a 5 cifras..";
}