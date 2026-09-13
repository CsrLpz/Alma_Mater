#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int puntosCalidad(int);

int main()
{
	int promedio = 0;
	cout << "Escriba el promedio del estudiante" << endl;
	cout << "Promedio: ";
	cin >> promedio;
	cout << puntosCalidad(promedio);
	_getch();
}

int puntosCalidad(int prom)
{
	if (prom >= 90 && prom <= 100)
		return 4;
	else if (prom >= 80 && prom <= 89)
		return 3;
	else if (prom >= 70 && prom <= 79)
		return 2;
	else if (prom >= 60 && prom <= 69)
		return 1;
	else if (prom < 60)
		return 0;
}