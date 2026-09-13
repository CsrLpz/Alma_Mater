#include "CuentaAhorros.h"
#include <iostream>
using std::cout;
using std::endl;
#include <conio.h>

int main()
{
	CuentaAhorros ahorrador1(2000.00), ahorrador2(3000.00);
	cout << "Ahorrador 1: " << endl;
	ahorrador1.calcularInteresMensual();
	cout << "\nAhorrador 2:" << endl;
	ahorrador2.calcularInteresMensual();
	cout << "\nAhorrador 1: " << endl;
	ahorrador1.calcularInteresMensualNuevo();
	cout << "\nAhorrador 2:" << endl;
	ahorrador2.calcularInteresMensualNuevo();
	_getch();
}