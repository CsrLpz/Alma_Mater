#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
#include <conio.h>

int main()
{
	int pago = 0, porcentaje = 0, total = 0;
	const int tamanioVendedores = 5;
	const int tamanioFrecuencia = 9;
	int vendedores[tamanioVendedores] = {}, frecuencia[tamanioFrecuencia] = {};
	for (int i = 0; i < tamanioVendedores; i++)
	{
		cout << "De cuanto fueron sus ventas esta semana?\n\nTotal: ";
		cin >> total;
		porcentaje = total*.09;
		pago = 200 + porcentaje;
		vendedores[i] = pago;
		if (pago >= 200 && pago < 300)
			frecuencia[0]++;
		else if (pago >= 300 && pago < 400)
			frecuencia[1]++;
		else if (pago >= 400 && pago < 500)
			frecuencia[2]++;
		else if (pago >= 500 && pago < 600)
			frecuencia[3]++;
		else if (pago >= 600 && pago < 700)
			frecuencia[4]++;
		else if (pago >= 700 && pago < 800)
			frecuencia[5]++;
		else if (pago >= 800 && pago < 900)
			frecuencia[6]++;
		else if (pago >= 900 && pago < 1000)
			frecuencia[7]++;
		else
			frecuencia[8]++;
	}
	cout << "Rango" << setw(15) << "Empleados" << endl;
	for (int j = 0; j < tamanioVendedores; j++)
		cout << j  << setw(15) << frecuencia[j] << endl;
	_getch();
}