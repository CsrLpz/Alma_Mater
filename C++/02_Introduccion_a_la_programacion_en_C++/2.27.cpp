#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	char letra;

	cout << "Ingresa un caracter cualquiera: ";
	cin >> letra;

	cout << static_cast<int>(letra) << endl;

	return 0;
}