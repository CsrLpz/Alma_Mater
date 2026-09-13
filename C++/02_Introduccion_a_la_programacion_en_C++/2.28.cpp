#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int numero;
	int unidad, decena, centena, unidadDeMillar, decenaDeMillar;
	cout << "Ingrese un entero de 5 digitos: ";
	cin >> numero;

	decenaDeMillar = numero / 10000;
	numero -= 10000 * decenaDeMillar;

	cout << decenaDeMillar << " ";

	unidadDeMillar = numero / 1000;
	numero -= 1000 * unidadDeMillar;

	cout << unidadDeMillar << " ";

	centena = numero / 100;
	numero -= 100 * centena;

	cout << centena << " ";

	decena = numero / 10;
	numero -= 10 * decena;

	cout << decena << " ";

	unidad = numero / 1;
	numero -= 1 * unidad;

	cout << unidad << " ";
}