#include "stdafx.h"
#include "Complejo.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

Complejo::Complejo(double Re, double Im)
{
	parteRe = Re;
	parteIm = Im;
}

Complejo::~Complejo()
{

}

void Complejo::obtenerNumeros(double real, double imaginario)
{
	parteRe = real;
	parteIm = imaginario;
}

double Complejo::parteReal()
{
	return parteRe;
}

double Complejo::parteImaginaria()
{
	return parteIm;
}