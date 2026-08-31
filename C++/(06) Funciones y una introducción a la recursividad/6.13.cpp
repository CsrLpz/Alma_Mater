// Alma Mater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int numeros = 0;
	float x = 0, y = 0;
	cout << "Cuantos numeros ingresaras: ";
	cin >> numeros;
	for (int i = 0; i < numeros; i++)
	{
		cout << "\nIngrese un numero: ";
		cin >> x;
		y = floor(x + .5);
		cout << "Numero ingresado: " << x << "\nNumero devuelto por floor(): " << y << endl;
	}
	_getch();
}