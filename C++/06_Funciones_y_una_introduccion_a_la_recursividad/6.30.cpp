// Alma Mater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

void primo(int);

int main()
{
	int numero;
	cout << "ingresa un numero y te dire si es primo" << endl;
	cin >> numero;
	primo(numero);
	_getch();
}

void primo(int n)
{
	int a = 0, i = 1;
	for (i; i <= n; i++)
	{
		if (n%i == 0)
			a++;
	}
	if (a == 2)
		cout << "Es primo";
	else
		cout << "No es primo";
}