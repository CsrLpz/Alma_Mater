#include <iostream>
#include <conio.h>

using namespace std;

double potencia(double, double);

int main()
{
	double base = 0, exponente = 0;
	cout << "Ingresa la base: ";
	cin >> base;
	do
	{
		cout << "Ingresa el exponente: ";
		cin >> exponente;
		if (exponente < 0)
			cout << "El exponente debe ser mayor a 0, ingresalo de nuevo" << endl;
	} while (exponente<0);
	cout << base << " elevado a " << exponente << " es igual a " << potencia(base, exponente);
	_getch();
}

double potencia(double b, double ex)
{
	if (ex == 1)
		return b;
	else
		return b*potencia(b, ex - 1);
}