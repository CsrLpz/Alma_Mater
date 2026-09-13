#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int numero = 0;
	int unidad = 0;
	int decena = 0;
	int centena = 0;
	int unidadDeMillar = 0;
	int decenaDeMillar = 0;
	int decimal = 0;

	cout << "Ingresa un numero binario" << endl;
	cout << "\nNumero: ";
	cin >> numero;

	decenaDeMillar = numero / 10000;
	numero %= 10000;
	unidadDeMillar = numero / 1000;
	numero %= 1000;
	centena = numero / 100;
	numero %= 100;
	decena = numero / 10;
	numero %= 10;
	unidad = numero;

	decimal = unidad * 1 + decena * 2 + centena * 4 + unidadDeMillar * 8 + decenaDeMillar * 16;

	cout << unidad << decena << centena << unidadDeMillar << decenaDeMillar << " en sistema decimal es: " << decimal << endl;
}