#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <conio.h>
#include <iomanip>
using std::setw;

int main()
{
	const int tamanioArreglo = 3;
	int tabla[tamanioArreglo][tamanioArreglo];
	for (int i = 0; i < tamanioArreglo; i++)
		for (int j = 0; j < tamanioArreglo; j++)
			tabla[i][j] = i + j;
	cout << "	 [0]		 [1]		 [2]" << endl;
	for (int i = 0; i < tamanioArreglo; i++)
	{
		cout << "[" << i << "]	";
		for (int j = 0; j < tamanioArreglo; j++)
			cout << setw(3) << tabla[i][j] << "		";
		cout << endl;
	}
	_getch();
}