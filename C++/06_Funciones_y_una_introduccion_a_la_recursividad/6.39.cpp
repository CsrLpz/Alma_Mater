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
	int numeroAleatorio = 0, respuesta = 0, opcion = 0, intentos = 0;
	do
	{
		cout << "Tengo un numero entre 1 y 1000. Puedes adivinar mi numero?\n\nPor favor, escribe tu primer ";
		numeroAleatorio = 1 + rand() % 1000;
		do
		{
			cout << "respuesta: ";
			cin >> respuesta;
			if (respuesta == numeroAleatorio)
				cout << "Excelente! Adivinaste el numero." << endl;
			else
			{
				intentos++;
				if (respuesta > numeroAleatorio)
					cout << "Demasiado alto. Intenta de nuevo." << endl;
				else
					cout << "Demasiado bajo. Intenta de nuevo." << endl;
			}
		} while (respuesta != numeroAleatorio || opcion == 1);
		if (intentos <= 10)
			cout << "O ya sabia usted el secreto, o tuvo suerte!" << endl;
		else if (intentos == 10)
			cout << "Aja! Sabia usted el secreto!" << endl;
		else  if (intentos > 10)
			cout << "Deberia haberlo hecho mejor!" << endl;
		cout << "Te gustaria jugar de nuevo ? \n1.Si   2. No\n\nOpcion: ";
		cin >> opcion;
	} while (opcion == 1);
	_getch();
	return 0;
}