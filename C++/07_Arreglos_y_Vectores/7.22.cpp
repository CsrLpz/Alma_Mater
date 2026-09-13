#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
#include <conio.h>

int main()
{
	const int productos = 5, vendedores = 4;
	int ventas[productos][vendedores] = { {584,322,612,333}, {864,397,742,111},{535,397,124,663},{280,622,232,124},{250,335,554,162} }, totalVendedores[vendedores] = {}, totalProductos[productos] = {};
	int m = 0, TotalVendedores = 0, TotalProductos = 0;
	while (m <= 4)
	{
		for (int l = 0; l < productos; l++)
			totalVendedores[m] += ventas[l][m];
		for (int p = 0; p < vendedores; p++)
			totalProductos[m] += ventas[m][p];
		TotalVendedores += totalVendedores[m];
		TotalProductos += totalProductos[m];
		m++;
	}
	cout << endl << "\t\t\t\t\tVENTAS TOTALES\n\n";
	cout << "                  ";
	for (int k = 1; k <= 4; k++)
		cout << "Vendedor " << k << "   ";
	cout << "T/Producto\n\n";

	for (int i = 0; i < productos; i++)
	{
		cout << "Producto " << i + 1;
		for (int j = 0; j < vendedores; j++)
			cout << setw(10) << "$" << ventas[i][j];
		cout << setw(10) << "$" << totalProductos[i];
		cout << "\n\n";
	}
	cout << "T/Vendedor";
	for (int n = 0; n < vendedores; n++)
		cout << "        " << "$" << totalVendedores[n];
	cout << "         Total" << endl << setw(72) << "$" << TotalProductos;
	_getch();
}