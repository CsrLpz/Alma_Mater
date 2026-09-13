#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int contador = 0;
	float numero = 0;
	int mayor = 0;

	while (contador < 10)
	{
		cout << "Introduzca un numero: ";
		cin >> numero;

		if (numero > mayor)
			mayor = numero;

		contador++;
	}

	cout << "El mayor es: " << mayor;

	return 0;
}