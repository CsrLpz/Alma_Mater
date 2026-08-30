#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <iomanip>
using std::setw;
#include <conio.h>

int tirarDados();

int main()
{
	enum Estado { CONTINUAR, GANO, PERDIO };
	int miPunto = 0;
	Estado estadoJuego;
	srand(time(NULL));
	const int tamanioArreglo = 2;
	int registerCraps[tamanioArreglo] = {};
	for (int i = 0; i < 1000; i++)
	{
		int sumaDados = tirarDados();

		switch (sumaDados)
		{
		case 7:
		case 11:
			estadoJuego = GANO;
			registerCraps[0]++;
			break;
		case 2:
		case 3:
		case 12:
			estadoJuego = PERDIO;
			registerCraps[1]++;
			break;
		default:
			estadoJuego = CONTINUAR;
			miPunto = sumaDados;
			cout << "El punto es " << miPunto << endl;
			break;
		}
		while (estadoJuego == CONTINUAR)
		{
			sumaDados = tirarDados();
			if (sumaDados == miPunto)
			{
				estadoJuego = GANO;
				registerCraps[0];
			}
			else if (sumaDados == 7)
			{
				estadoJuego = PERDIO;
				registerCraps[1]++;
			}
		}
		if (estadoJuego == GANO)
			cout << "El jugador gana" << endl;
		else
			cout << "El jugador pierde" << endl;
	}
	cout << "\n\nEstado" << fixed << setw(20) << "Registro" << endl;
	cout << "\nGanados" << setw(19) << registerCraps[0] << endl << "\nPerdidos" << setw(18) << registerCraps[1] << endl;
	_getch();
}

int tirarDados()
{
	int dado1 = 1 + rand() % 6, dado2 = 1 + rand() % 6;
	int suma = dado1 + dado2;
	cout << "El jugador tiro " << dado1 << " + " << dado2 << " = " << suma << endl;
	return suma;
}