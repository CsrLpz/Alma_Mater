#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int entero1, entero2;
	cout << "Ingresa 2 enteros.\nEntero 1:";
	cin >> entero1;
	cout << "Entero 2:";
	cin >> entero2;

	if (entero1 > entero2)
		cout << entero1 << " es mayor" << endl;
	else if (entero2 > entero1)
		cout << entero2 << " es mayor" << endl;
	else
		cout << entero1 << " y " << entero2 << " son iguales" << endl;
}