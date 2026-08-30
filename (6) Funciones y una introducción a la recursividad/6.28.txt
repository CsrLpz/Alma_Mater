// Alma Mater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

double masPequeño(double, double, double);

int main()
{
	double numero1 = 0, numero2 = 0, numero3 = 0;
	cout << "Ingresa 3 numeros y te dire cual es el mas pequeño." << endl;
	cout << "Numero 1: ";
	cin >> numero1;
	cout << "Numero 2: ";
	cin >> numero2;
	cout << "Numero 3: ";
	cin >> numero3;
	cout << "El numero mas pequeño es: " << setprecision(5) << masPequeño(numero1, numero2, numero3);
	_getch();
}

double masPequeño(double n1, double n2, double n3)
{
	if (n1 < n2&&n1 < n3)
		return n1;
	else if (n2 < n1&&n2 < n3)
		return n2;
	else if (n3 < n2&&n3 < n1)
		return n3;
}