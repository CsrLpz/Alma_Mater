#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num1, num2, num3;
	cout << "Introduzca 3 enteros distintos: ";
	cin >> num1 >> num2 >> num3;

	cout << "La suma es: " << num1 + num2 + num3 << endl;
	cout << "El promedio es: " << (num1 + num2 + num3) / 3 << endl;
	cout << "El producto es: " << num1 * num2 * num3 << endl;

	if (num1 < num2 && num1 < num3)
		cout << "El menor es: " << num1 << endl;
	else if (num2 < num1 && num2 < num3)
		cout << "El menor es: " << num2 << endl;
	else if (num3 < num1 && num3 < num2)
		cout << "El menor es: " << num3 << endl;
	if (num1 > num2 && num1 > num3)
		cout << "El mayor es: " << num1 << endl;
	else if (num2 > num1 && num2 > num3)
		cout << "El mayor es: " << num2 << endl;
	else if (num3 > num1 && num3 > num2)
		cout << "El mayor es: " << num3 << endl;
}