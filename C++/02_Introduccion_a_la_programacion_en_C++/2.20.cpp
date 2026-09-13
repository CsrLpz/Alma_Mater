#include "iostream"
using namespace std;

int main()
{
	int radio;
	int pi = 3.14159;
	cout << "Ingresa el radio de un círculo: ";
	cin >> radio;

	cout << "Diametro: " << radio * 2 << endl;
	cout << "Circunferencia: " << (radio * 2) * pi << endl;
	cout << "Area: " << pi * (radio * radio) << endl;
}