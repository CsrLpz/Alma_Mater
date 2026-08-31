#include "stdafx.h"
#include <conio.h>
#include "Complejo.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	Complejo objeto1(0.0, 0.0), objeto2(0.0, 0.0);
	int opcion = 0;
	double nRe = 0, nIm = 0, resultadoRe = 0.0, resultadoIm = 0.0;
	cout << "Escribe un numero real y un numero imaginario.";
	cin >> nRe >> nIm;
	objeto1.obtenerNumeros(nRe, nIm);
	cout << "Vuelve a escribir un numero real y uno imaginario.";
	cin >> nRe >> nIm;
	objeto2.obtenerNumeros(nRe, nIm);
	cout << "1. Suma.\n2. Resta.\nOpcion: ";
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		resultadoRe = objeto1.parteReal() + objeto2.parteReal();
		resultadoIm = objeto1.parteImaginaria() + objeto2.parteImaginaria();
		cout << resultadoRe << " + " << resultadoIm << "i" << endl;
		break;
	case 2:
		resultadoRe = objeto1.parteReal() - objeto2.parteReal();
		resultadoIm = objeto1.parteImaginaria() - objeto2.parteImaginaria();
		cout << resultadoRe << " - " << resultadoIm << "i" << endl;
		break;
	default:
		cout << "Opcion invalida" << endl;
		break;
	}
	_getch();
}