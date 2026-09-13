#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "Ingresa 3 numeros distintos de 0." << endl;
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	cout << "C: ";
	cin >> c;

	if (a > 0 && b > 0 && c > 0)
	{
		if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
			cout << "Es un triangulo recto." << endl;
		else
			cout << "No es un triangulo." << endl;
	}

	return 0;
}