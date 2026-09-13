#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <conio.h>
#include <iomanip>
using std::fixed;
using std::setprecision;
using std::setw;

int main()
{
	const int tamanioArreglo = 10, tamanioArreglo2 = 15, tamanioArreglo3 = 12, tamanioArreglo4 = 5;
	int cuentas[tamanioArreglo] = {};
	int bono[tamanioArreglo2] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	double temperaturasMensuales[tamanioArreglo3] = {};
	int mejoresPuntuaciones[tamanioArreglo4] = { 70,80,85,93,100 };
	cout << "Arreglo 'bono[15]' sin sumarle 1.\nbono[";
	for (int i = 0; i < tamanioArreglo2; i++)
		cout << bono[i]++<<", ";
	cout << "]\n\n" << endl;
	cout << "Arreglo 'bono[15]' sumandole 1.\nbono[";
	for (int j = 0; j < tamanioArreglo2; j++)
		cout << bono[j] << ", ";
	cout << "]\n\n" << endl;
	cout << "Ingrese 12 valores al arreglo." << endl;
	int n = 1;
	for (int k = 0; k < tamanioArreglo3; k++)
	{
		cout << "temperaturasMensuales[" << n <<"]: ";
		cin >> temperaturasMensuales[k];

		n++;
	}
	cout << "temperaturasMensuales[";
	for (int l = 0; l < tamanioArreglo3; l++)
		cout << temperaturasMensuales[l] << ", ";
	cout << "]" << endl;
	cout << "\n\nMejores Puntuaciones" << endl;
	for (int m = 0; m < tamanioArreglo4; m++)
		cout << mejoresPuntuaciones[m] << endl;
	_getch();
}