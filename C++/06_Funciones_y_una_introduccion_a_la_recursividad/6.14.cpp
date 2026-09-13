// Alma Mater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

double redondearAEntero(double);
double redondearADecimas(double);
double redondearACentesimas(double);
double redondearAMilesimas(double);

int main()
{
	int opcion = 0;
	double numero = 0;
	do
	{
		cout << "Ingrese un numero: ";
		cin >> numero;
		cout << "Valor ingresado: " << numero << ", valor devuelto " << redondearAEntero(numero) << endl;
		cout << "Valor ingresado: " << numero << ", valor devuelto " << redondearADecimas(numero) << endl;
		cout << "Valor ingresado: " << numero << ", valor devuelto " << redondearACentesimas(numero) << endl;
		cout << "Valor ingresado: " << numero << ", valor devuelto " << redondearAMilesimas(numero) << endl;
		cout << "Desea continuar\n1. Si 2. No" << endl;
		cin >> opcion;
	} while (opcion != 2);
	_getch();
}

double redondearAEntero(double x)
{
	double y = 0;
	return y = floor(x + .5);
}

double redondearADecimas(double x)
{
	double y = 0;
	return y = floor(x * 10 + .5) / 10;
}

double redondearACentesimas(double x)
{
	double y = 0;
	return y = floor(x * 100 + .5) / 100;
}

double redondearAMilesimas(double x)
{
	double y = 0;
	return y = floor(x * 100 + .5) / 1000;
}