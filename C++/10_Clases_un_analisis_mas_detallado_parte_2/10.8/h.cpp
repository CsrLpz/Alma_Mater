#pragma once
#ifndef CUENTAAHORROS_H
#define CUENTAARORROS_H

class CuentaAhorros
{
public:
	CuentaAhorros(double);
	~CuentaAhorros();
	void calcularInteresMensual();
	void calcularInteresMensualNuevo();
	static double modificarTasaInteres();
	double getSaldoMensual()const;
private:
	static double tasaInteresAnual;
	double saldoAhorros, saldo;
};

#endif