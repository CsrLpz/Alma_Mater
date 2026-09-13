#include "Racional.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

Racional::Racional(int num, int denom)
{
	numerador = num;
	denominador = denom;
}

Racional::~Racional()
{

}

void Racional::establecerFraccion()
{
	cout << "Numerador: ";
	cin >> numerador;
	cout << "Denominador: ";
	cin >> denominador;
	if (numerador == denominador)
		cout << "1" << endl;
	else
		simplificar(numerador, denominador);
}

void Racional::simplificar(int n, int d)
{
	for (int i = 2; i <= d; i++)
	{
		do
		{
			if (d%i == 0 && n%i == 0)
			{
				n /= i;
				d /= i;
			}
		} while (n%i == 0 && d%i == 0);
	}
	cout << "Resutado racional: " << n << "/" << d << endl;
	cout << endl;
}

void Racional::suma()
{
	int tNum1 = 0, tNum2 = 0;
	double resPunto = 0.0, tNumerador = 0.0, tDenominador = 0.0;
	Racional fraccion1, fraccion2;
	fraccion1.establecerFraccion();
	fraccion2.establecerFraccion();
	tNum1 = fraccion1.numerador*fraccion2.denominador;
	tNum2 = fraccion1.denominador*fraccion2.numerador;
	tNumerador = tNum1 + tNum2;
	tDenominador = fraccion1.denominador*fraccion2.denominador;
	simplificar(tNumerador, tDenominador);
	resPunto = tNumerador / tDenominador;
	cout << "Resultado punto flotante: " << resPunto;
}

void Racional::resta()
{
	int tNum1 = 0, tNum2 = 0;
	double resPunto = 0.0, tNumerador = 0.0, tDenominador = 0.0;
	Racional fraccion1, fraccion2;
	fraccion1.establecerFraccion();
	fraccion2.establecerFraccion();
	tNum1 = fraccion1.numerador*fraccion2.denominador;
	tNum2 = fraccion1.denominador*fraccion2.numerador;
	tNumerador = tNum1 - tNum2;
	tDenominador = fraccion1.denominador*fraccion2.denominador;
	simplificar(tNumerador, tDenominador);
	resPunto = tNumerador / tDenominador;
	cout << "Resultado punto flotante: " << resPunto;
}

void Racional::multiplicacion()
{
	double resPunto = 0.0, tNumerador = 0.0, tDenominador = 0.0;
	Racional fraccion1, fraccion2;
	fraccion1.establecerFraccion();
	fraccion2.establecerFraccion();
	tNumerador = fraccion1.numerador*fraccion2.numerador;
	tDenominador = fraccion1.denominador*fraccion2.denominador;
	simplificar(tNumerador, tDenominador);
	resPunto = tNumerador / tDenominador;
	cout << "Resultado punto flotante: " << resPunto;
}

void Racional::division()
{
	double resPunto = 0.0, tNumerador = 0.0, tDenominador = 0.0;
	Racional fraccion1, fraccion2;
	fraccion1.establecerFraccion();
	fraccion2.establecerFraccion();
	tNumerador = fraccion1.numerador*fraccion2.denominador;
	tDenominador = fraccion1.denominador*fraccion2.numerador;
	simplificar(tNumerador, tDenominador);
	resPunto = tNumerador / tDenominador;
	cout << "Resultado punto flotante: " << resPunto;
}