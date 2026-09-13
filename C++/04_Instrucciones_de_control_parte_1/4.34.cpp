#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int numero = 0;
	int unidadDeMillar = 0;
	int centena = 0;
	int decena = 0;
	int unidad = 0;

	cout << "\t\t\t\tIngrese un numero de cuatro digitos para cifrarlo." << endl;
	cout << "\n\tNumero: ";
	cin >> numero;

	if (numero / 1000 > 0 && numero / 1000 < 10)
	{
		unidadDeMillar = numero / 1000;
		unidadDeMillar += 7;
		centena = (numero / 100) % 10;
		centena += 7;
		decena = (numero / 10) % 10;
		decena += 7;
		unidad = numero % 10;
		unidad += 7;
	}
	else
		cout << "No es un numero de 4 digitos..." << endl;

	cout << "\tEl numero cifrado es: " << decena << unidad << unidadDeMillar << centena << endl;

	return 0;
}