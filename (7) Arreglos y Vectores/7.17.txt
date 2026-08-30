#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setw;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <conio.h>

int main()
{
	srand(time(NULL));
	int dado1 = 0, dado2 = 0, sumaDeDados = 0;
	const int tamanioArreglo = 13;
	int posibilidades[tamanioArreglo] = {};
	for (int i = 1; i <= 36000; i++)
	{
		dado1 = 1 + rand() % 6;
		dado2 = 1 + rand() % 6;
		sumaDeDados = dado1 + dado2;
		posibilidades[sumaDeDados]++;
	}
	cout << "Cara" << fixed << setw(20) << "Resultado" << endl;
	for (int j = 1; j < tamanioArreglo; j++)
		cout << j << fixed << setw(22) << posibilidades[j] << endl;
	_getch();
}