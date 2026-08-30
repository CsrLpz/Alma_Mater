#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <conio.h>

int main()
{
	const int tamanioArreglo = 10;
	int provicional = 0;
	int ordenamientoBurbuja[tamanioArreglo] = { 10,1,7,20,0,95,42,11,3,10 };
	cout << "Arreglo desordenado.\n" << endl;
	for (int i = 0; i < tamanioArreglo; i++)
		cout << ordenamientoBurbuja[i] << ", ";
	for (int j = 1; j < tamanioArreglo; j++)
	{
		provicional = ordenamientoBurbuja[j];
		int moverElemento = j;
		while ((moverElemento > 0) && (ordenamientoBurbuja[moverElemento - 1] > provicional))
		{
			ordenamientoBurbuja[moverElemento] = ordenamientoBurbuja[moverElemento - 1];
			moverElemento--;
		}
		ordenamientoBurbuja[moverElemento] = provicional;
	}
	cout << "\nArreglo ordenado con 'Ordenamiento Burbuja'.\n" << endl;
	for (int k = 0; k < tamanioArreglo; k++)
		cout << ordenamientoBurbuja[k] << ", ";
	_getch();
}