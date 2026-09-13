#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	double radio = 0;
	const float pi = 3.14159;

	cout << "Ingresa el radio de un circulo." << endl;
	cout << "\nRadio: ";
	cin >> radio;

	cout << "Diametro: " << radio * 2 << endl;
	cout << "Circuferencia: " << pi * radio * 2 << endl;
	cout << "Area: " << pi * radio * radio << endl;

	return 0;
}