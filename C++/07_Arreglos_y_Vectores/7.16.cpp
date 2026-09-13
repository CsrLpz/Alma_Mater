#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <conio.h>

int main()
{
	const int filas = 3, columnas = 5;
	int ventas[filas][columnas];
	for (int i = 0; i < filas; i++)
		for (int j = 0; j < columnas; j++)
			ventas[i][j] = 0;
	_getch();
}