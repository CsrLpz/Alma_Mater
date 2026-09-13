#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	double a = 0;
	double b = 0;
	double c = 0;

	cout << "Escribe 3 cantidades.\n" << endl;
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	cout << "C: ";
	cin >> c;

	if (a + b > c && a + c > b && b + c > a)
		cout << "\nBien podria ser un triangulo." << endl;
	else
		cout << "\nNo es un triangulo." << endl;

	return 0;
}