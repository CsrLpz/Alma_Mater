#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <conio.h>

int main()
{
	const int tamanioArreglo = 10;
	int numeros[tamanioArreglo] = {};
	int Numero = 0, clave = 0, intruso = 0;
	cout << "Ingrese 20 numeros entre 10 y 100" << endl;
	for (int i = 0; i < tamanioArreglo; i++)
	{
		cin >> numeros[i];
		if (numeros[i] < 10 || numeros[i]>100)
		{
			numeros[i] = 0;
			cout << "El numero no pertenece al rango deseado, ingrese un nuevo numero" << endl;
			i--;
		}
	}
	int desplazo = 0;
	for (int j = 0; j < tamanioArreglo; j++)
	{
		while(clave!=numeros[j])
		{
			cout << numeros[j];
			clave = numeros[desplazo];
			desplazo++;
		}
	}
	_getche();	//Experimentando con _getch() y _getche().
}