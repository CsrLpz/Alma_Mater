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
#include <vector>
using std::vector;

int main()
{
	srand(time(NULL));
	int dado1 = 0, dado2 = 0, sumaDeDados = 0;
	const int tamanioArreglo = 13;
	//int posibilidades[tamanioArreglo] = {};
	vector <int> posibilidades(13);
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

/*
Si quieres saber como funciona mas o menos, sólo quita las diagonales
invertidas al arreglo y observa cómo se despintan los corchetes de
'posibilidades[sumaDeDados]++;'. En si, no tuve que hacer nada mas que
declarar un objeto 'vector' con el mismo nombre que le di al arreglo..
no pasaría nada si le pusiera otro nombre, sólo debería cambiar también
el nombre en donde vaya el arreglo en si.
*/