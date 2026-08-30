// Alma Mater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

void dibujo(int);

int main()
{
	int lado;
	cout << "Ingrese el lado del cuadrado de asteriscos '*'." << endl;
	cin >> lado;
	dibujo(lado);
	_getch();
}

void dibujo(int Lado)
{
	for (int i = 1; i <= Lado; i++)
	{
		for (int j = 1; j <= Lado; j++)
			cout << "*";
		cout << endl;
	}
}