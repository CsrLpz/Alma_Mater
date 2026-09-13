#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setprecision;
using std::fixed;

int main()
{
	int numero = 1;
	double factorial = 1.0;
	int contador1 = 0;
	int contador2 = 0;
	int contador3 = 0;
	double e = 1.0;
    double x = 0.0;
	double numerador = 1.0;

	cout << "Numero (sumatoria): ";
	cin >> numero;
    cout << "x: ";
    cin >> x;

	contador1 = contador2 = contador3 = numero;

	if (numero >= 0)
	{
		while (contador1 > 0)
		{
			while (contador2 > 0)
			{
				factorial *= contador2;
				contador2--;
			}
            
            while (contador3 > 0)
            {
                numerador *= x;
                contador3--;
            }

			e += numerador / factorial;
			contador2 = contador3 = --contador1;
			factorial = 1;
			numerador = 1;

		}
		cout << fixed << setprecision(6) << "e^" << x << " = " << e << endl;
	}
	else
		cout << "No se puede un numero negativo..." << endl;

	return 0;
}