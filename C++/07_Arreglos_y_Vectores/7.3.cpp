#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <conio.h>
#include <iomanip>
using std::setprecision;
using std::fixed;

int main()
{
	const int tamanioArreglo = 10;
	double arreglo[tamanioArreglo] = {};

	cout << "Nombrando al 4to elemento del arreglo: " << arreglo[3] << endl;

	cout << "Haciendo referencia al elemento 4 del arreglo: " << arreglo[4] << endl;

	arreglo[9] = 1.667;

	arreglo[6] = 3.333;

	cout << "Imprimiendo los elementos 6 y 9 del arreglo: " << fixed << setprecision(2) << arreglo[6] <<" "<< setprecision(2) << arreglo[9] << endl;

	cout << "Imprimiendo todo el arreglo" << endl;
	for (int i = 0; i < tamanioArreglo; i++)
		cout << "arreglo[" << i << "]= " << arreglo[i] << endl;
	_getch();
}