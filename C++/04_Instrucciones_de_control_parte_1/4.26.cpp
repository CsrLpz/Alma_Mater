#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int numero = 0;
	int decenaDeMillar = 0;
	int unidadDeMillar = 0;
	int centena = 0;
	int decena = 0;

	cout << "Ingresa un numero de 5 digitos y te dire si es un palindromo.\nNumero: ";
	cin >> numero;
	
	decenaDeMillar = numero / 10000;
	numero %= 10000;

	unidadDeMillar = numero / 1000;
	numero %= 1000;

	centena = numero / 100;
	numero %= 100;

	decena = numero / 10;
	numero %= 10;

	if (decenaDeMillar == numero && unidadDeMillar == decena)
		cout << "\n\nEs un palindromo." << endl;
	else
		cout << "\n\nNo es palindromo." << endl;

	return 0;
}