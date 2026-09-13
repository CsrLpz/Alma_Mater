#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int numero = 1;
	int factorial = 1;
	int contador = 0;

	cout << "Numero: ";
	cin >> numero;

	contador = numero;

	if (numero >= 0)
	{
		cout << numero << "! = ";
		while (contador > 0)
		{
			factorial *= contador;
			contador--;
		}
		cout << factorial;
	}
	else
		cout << "No se puede un numero negativo..." << endl;

	return 0;
}