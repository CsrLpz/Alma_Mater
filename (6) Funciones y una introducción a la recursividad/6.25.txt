// Alma Mater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int enteroCociente(int, int);
int enteroResiduo(int, int);
int separacionDeNumeros();

int main()
{
	char opcion;
	int numero1 = 0, numero2 = 0;
	cout << "a) Calcular la parte entera del cociente, cuando el entero a se divide por el entero b.\nb)Calcular el residuo entero cuando el  entero a se divide entre el entero b.\nc)...........";
	cout << "\n\nQue opcion eliges: " << endl;
	cin >> opcion;
	cout << "Dame 2 numeros: ";
	cin >> numero1 >> numero2;
	switch (opcion)
	{
	case 'a':
		cout << enteroCociente(numero1, numero2);
	break;
	case 'b':
		cout << enteroResiduo(numero1, numero2);
	break;
	case 'c':
		//cout << separacionDeNumeros(numero1, numero2);
	break;
	}
	_getch();
}

int enteroCociente(int n1, int n2)
{
	return n1 / n2;
}

int enteroResiduo(int n1, int n2)
{
	return n1%n2;	
}