// Alma Mater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

double hipotenusa(double, double);

int main()
{
	double catOp = 0, catAdy = 0;
	cout << "Ingrese los dos catetos de un triángulo y yo calculare la hipotenusa" << endl;
	cout << "Cateto Opuesto: ";
	cin >> catOp;
	cout << "Cateto Adyacente: ";
	cin >> catAdy;
	cout << "Hipotenusa: " << hipotenusa(catOp, catAdy);
	_getch();
}

double hipotenusa(double CO, double CA)
{
	double Hipotenusa = 0;
	CO *= CO;
	CA *= CA;
	CO += CA;
	Hipotenusa = sqrt(CO);
	return Hipotenusa;
}