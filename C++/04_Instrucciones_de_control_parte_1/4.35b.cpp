#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int numero = 1;
	int factorial = 1;
	int contador1 = 0;
	int contador2 = 0;
	double e = 1;

	cout << "Numero: ";
	cin >> numero;

	contador1 = contador2 = numero;

	if (numero >= 0)
	{
		while (contador1 > 0)
		{
			while (contador2 > 0)
			{
				factorial *= contador2;
				contador2--;
			}
			e += 1.0 / factorial;
			contador2 = --contador1;
			factorial = 1;
		}
		cout << "e = " << e;
	}
	else
		cout << "No se puede un numero negativo..." << endl;

	return 0;
}