#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int x, y, i = 1, potencia = 1;

	cout << "Escriba la base como un entero: ";
	cin >> x;

	cout << "Escriba el exponente como un entero: ";
	cin >> y;

	while (i <= y)
	{
		potencia *= x;
		i++;
	}

	cout << x << " elevado a " << y << " es: " << potencia;

	return 0;
}