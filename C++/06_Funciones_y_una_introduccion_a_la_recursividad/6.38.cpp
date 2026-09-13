#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <conio.h>
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;

int main()
{
	srand(time(0));
	int numeroAleatorio = 1 + rand() % 1000, respuesta = 0, opcion = 0;
	cout << "Tengo un numero entre 1 y 1000. Puedes adivinar mi numero?\n\nPor favor, escribe tu primer respuesta: ";
	do
	{
		cin >> respuesta;
		if (respuesta == numeroAleatorio)
		{
			cout << "Excelente! Adivinaste el numero.\n\nTe gustaria jugar de nuevo?\n1. Si   2. No" << endl;
			cin >> opcion;
		}
		else
		{
			if (respuesta > numeroAleatorio)
				cout << "Demasiado alto. Intenta de nuevo." << endl;
			else
				cout << "Demasiado bajo. Intenta de nuevo." << endl;
		}
	} while (respuesta != numeroAleatorio);
	_getch();
	return 0;
}