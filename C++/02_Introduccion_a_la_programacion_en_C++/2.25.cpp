#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num1, num2;

	cout << "Ingresa dos numeros: ";
	cin >> num1 >> num2;

	if (num1 % num2 == 0)
		cout << num1 << " es multiplo de " << num2 << endl;
	if (num2 % num1 == 0)
		cout << num2 << " es multiplo de " << num1 << endl;
}