#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int km = 0;
	int lt = 0;
	int flag = 0;
	int total = 0;
	int counter = 0;

	while (flag == 0)
	{
		counter++;

		cout << "\nIngresa los kilometros: ";
		cin >> km;
		cout << "Ingresa los litros: ";
		cin >> lt;

		total += (km / lt);
		cout << km / lt << " kilometros por litro" << endl;

		cout << "El total de kilometros por litro es: " << total / counter << endl;

		cout << "\nVas a ingresar mas datos?\n0. Si\t1. No";
		cin >> flag;
	}

	return 0;
}