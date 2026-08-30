#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int MCD(int, int);

int main()
{
	int numero1 = 0, numero2 = 0;
	cout << "Ingresa 2 numeros y te dare su Maximo Comun Divisior" << endl;
	cout << "Numero 1: ";
	cin >> numero1;
	cout << "Numero 2: ";
	cin >> numero2;
	cout << "El Maximo Comun Divisor de " << numero1 << " y " << numero2 << " es: " << MCD(numero1, numero2);
	_getch();
}

int MCD(int n1, int n2)
{
	int a = 2, mcd = 1;
	for (int i = 0; i <= 100; i++)
	{
		if (n1%a == 0 && n2%a == 0)
		{
			n1 /= a;
			n2 /= a;
			mcd *= a;
		}
		else
			a++;
	}
	return mcd;
}	