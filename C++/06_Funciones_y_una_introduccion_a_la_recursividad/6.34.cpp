#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

bool tirar();

int main()
{
	int contador = 0, contador1 = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (tirar() == 0)
		{
			contador++;
			cout <<contador<< " Cara" << endl;
		}
		else
		{
			contador1++;
			cout << contador << " Cruz" << endl;
		}
	}
	cout << "Cara" << setw(15) << "Frecuencia: " << contador << endl;
	cout << "Cruz" << setw(15) << "Frecuencia: " << contador1;
	_getch();
}

bool tirar()
{
	if (rand() % 2 == 1)
		return true;
	return false;
}