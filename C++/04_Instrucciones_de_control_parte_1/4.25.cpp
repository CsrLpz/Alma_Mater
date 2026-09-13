NO LO HICE YO!!!!!

#include "iostream"
using std::cout;
using std::cin;

int main()
{
	int contador = 0;
	float numero = 0;
	int mayor = 0;
	int mayor2 = 0;

	while (contador < 10)
	{
		cout << "Introduzca un numero: ";
		cin >> numero;

		if (numero > mayor && numero > mayor2)
		{
			mayor2 = mayor;
			mayor = numero;
		}
		if (numero > mayor2 && numero < mayor)
			mayor2 = numero;

		contador++;
	}

	cout << "\nLos mayores son: " << mayor << " y " << mayor2;

	return 0;
}