#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;

void Fibonacci(double);

int main()
{
	double numero = 0;
	cout << "Dame un numero para mostrarte la serie Fibonacci: ";
	cin >> numero;
	Fibonacci(numero);
	_getch();
}

void Fibonacci(double n)
{
	double valorAnterior1 = 0, valorAnterior2 = 1, valorActual = 0;
	cout << "0 1 ";
	for (int i = 0; i < n; i++)
	{
		valorActual = valorAnterior1 + valorAnterior2;
		valorAnterior1 = valorAnterior2;
		valorAnterior2 = valorActual;
		cout << valorActual << " ";
	}
}