#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num;

	cout << "Ingresa un numero: ";
	cin >> num;

	if (num % 2 == 0)
		cout << "Par." << endl;
	if (num % 2 == 1)
		cout << "Impar." << endl;
}