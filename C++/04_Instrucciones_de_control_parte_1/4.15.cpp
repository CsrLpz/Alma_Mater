#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	float ventas = 0;
	int opcion = 0;

	while (opcion != -1)
	{
		cout << "Introduzca las ventas en dolares: ";
		cin >> ventas;

		cout << "\nEl salario es : " << ventas * .09 + 200 << endl;
		
		cout << "\nEscriba -1 para salir, 1 para continuar.";
		cin >> opcion;
	}

	return 0;
}