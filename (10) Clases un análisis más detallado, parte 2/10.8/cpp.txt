#include "CuentaAhorros.h"
#include <iostream>
using std::cout;
using std::endl;

double CuentaAhorros::tasaInteresAnual = 0.03;

CuentaAhorros::CuentaAhorros(double sA):saldo(sA)
{
}


CuentaAhorros::~CuentaAhorros()
{
}

void CuentaAhorros::calcularInteresMensual()
{
	saldoAhorros = saldo;
	saldoAhorros += (saldoAhorros*tasaInteresAnual) / 12;
	cout << "Saldo actual con 3% de interes: " << saldoAhorros << endl;
}

void CuentaAhorros::calcularInteresMensualNuevo()
{
	modificarTasaInteres();
	saldoAhorros = saldo;
	saldoAhorros += (saldoAhorros*tasaInteresAnual) / 12;
	cout << "Nuevo saldo con 4% de interes: " << saldoAhorros << endl;
}

double CuentaAhorros::modificarTasaInteres()
{
	tasaInteresAnual = 0.04;
	return tasaInteresAnual;
}

double CuentaAhorros::getSaldoMensual()const
{
	return saldoAhorros;
}