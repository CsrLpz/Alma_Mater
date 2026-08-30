// Alma Mater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

double centigrados(double);
double farenheit(double);
void todos();

int main()
{
	int opcion = 0;
	double temp = 0;
	cout << "Eliga una opcion.\n1. Centigrados a Farenheit.\n2. Farenheit a Centigrados.\n3. Mostrar todas las conversiones." << endl;
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		cout << "Ingresa una temperatura: ";
		cin >> temp;
		cout << centigrados(temp) << " grados centigrados";
		break;
	case 2:
		cout << "Ingresa una temperatura: ";
		cin >> temp;
		cout << farenheit(temp) << " grados farenheit";
		break;
	case 3:
		todos();
	}
	_getch();
}

double centigrados(double temperatura)
{
	return temperatura*1.8 + 32;
}

double farenheit(double temperatura)
{
	return (temperatura - 32) / 1.8;
}

void todos()
{
	for (int i = 0; i <= 100; i++)
		cout << (i - 32) / 1.8 << endl;
}