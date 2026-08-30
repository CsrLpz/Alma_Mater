// Alma Mater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

void dibujo(int, char);

int main()
{
	int lado;
	char caracter;
	cout << "Ingrese el lado del cuadrado de asteriscos '*'." << endl;
	cin >> lado;
	cout << "Ahora ingrese un caracter" << endl;
	cin >> caracter;
	dibujo(lado,caracter);
	_getch();
}

void dibujo(int Lado, char Caracter)
{
	for (int i = 1; i <= Lado; i++)
	{
		for (int j = 1; j <= Lado; j++)
			cout << Caracter;
		cout << endl;
	}
}