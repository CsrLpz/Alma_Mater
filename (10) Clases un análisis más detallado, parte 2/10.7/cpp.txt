#include "Fecha.h"
#include <iostream>
using std::cout;
using std::endl;

Fecha::Fecha(int dd, int mm, int aa):diasEnTotal(0)
{
	if (mm > 0 && mm <= 12)
		mes = mm;
	else
	{
		mes = 1;
		cout << "Mes invalido(" << mm << ") se establecio en 1.\n";
	}
	dia = comprobarDia(dd);
	anio = aa;
	diasEnTotal = diasTotales();
}

void Fecha::imprimir()const
{
	cout << dia << '/' << mes << '/' << anio << endl;
	if (diasEnTotal > 0 && diasEnTotal < 10)
		cout << "\n00" << diasEnTotal << " " << anio << endl;
	else if (diasEnTotal > 9 && diasEnTotal < 100)
		cout << "\n0" << diasEnTotal << " " << anio << endl;
	else
		cout << endl << diasEnTotal << " " << anio << endl;
	cout << "\n" << mes << '/' << dia << '/' << anio << endl;
	cout << endl;
	switch (mes)
	{
	case 1:
		cout << "Enero " << dia << ", " << anio;
		break;
	case 2:
		cout << "Febrero " << dia << ", " << anio;
		break;
	case 3:
		cout << "Marzo " << dia << ", " << anio;
		break;
	case 4:
		cout << "Abril " << dia << ", " << anio;
		break;
	case 5:
		cout << "Mayo " << dia << ", " << anio;
		break;
	case 6:
		cout << "Junio " << dia << ", " << anio;
		break;
	case 7:
		cout << "Julio " << dia << ", " << anio;
		break;
	case 8:
		cout << "Agosto " << dia << ", " << anio;
		break;
	case 9:
		cout << "Septiembre " << dia << ", " << anio;
		break;
	case 10:
		cout << "Octubre " << dia << ", " << anio;
		break;
	case 11:
		cout << "Noviembre " << dia << ", " << anio;
		break;
	case 12:
		cout << "Diciendre " << dia << ", " << anio;
		break;
	default:
		cout << "Mes inexistente. (?)";
		break;
	}
}

Fecha::~Fecha()
{

}

int Fecha::comprobarDia(int diaPrueba)const
{
	static const int diaPorMes[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (diaPrueba > 0 && diaPrueba <= diaPorMes[mes])
		return diaPrueba;
	if (mes == 2 && diaPrueba == 29 && (anio % 400 == 0 || (anio % 4 == 0 && anio % 100 != 0)))
		return diaPrueba;
	cout << "Dia invalido; el dia " << diaPrueba << " se establecio en 1.\n";
	return 1;
}

int Fecha::diasTotales()
{
	int total = 0, MM = 1;
	static const int diaPorMes[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	while (MM < mes)
	{
		total += diaPorMes[MM];
		MM++;
	}
	total += dia;
	return total;
}