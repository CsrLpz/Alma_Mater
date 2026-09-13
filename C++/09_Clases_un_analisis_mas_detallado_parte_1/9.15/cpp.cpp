#include "TresEnRaya.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <conio.h>

TresEnRaya::TresEnRaya()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			gatito[i][j] = '-';
	}
}

TresEnRaya::~TresEnRaya()
{

}

void TresEnRaya::ingresarDatos()
{
	bool option = 0;	//Para escoger "X" o "O".
	do
	{
		for (int i = 0; i < 4; i++)
		{
			int x = 0, y = 0;
			do
			{
				impresionDelJuego();
				cout << "\n\nJugador 1, ingrese las coordenadas de su movimiento" << endl;
				cout << "x: "; cin >> x;
				cout << "-y: "; cin >> y;
				if (x > 2 || y > 2)
					cout << "Uno de las coordenadas no corresponde al tablero de juego (3x3)" << endl;
			} while ((x < 0 || y < 0) || (x > 3 || y > 3));
			gatito[y][x] = 'X';
			estatusDelJuego();
			system("cls");
			
			do
			{
				impresionDelJuego();
				cout << "\n\nJugador 2, ingrese las coordenadas de su movimiento" << endl;
				cout << "x: "; cin >> x;
				cout << "-y: "; cin >> y;
				if (x > 2 || y > 2)
					cout << "Uno de las coordenadas no corresponde al tablero de juego (3x3)" << endl;
			} while ((x < 0 || y < 0) || (x > 3 || y > 3));
			gatito[y][x] = 'O';
			option = estatusDelJuego();
			system("cls");
		}
	} while (option > 0 && option < 2);
}

bool TresEnRaya::estatusDelJuego()
{
	int statusX = 0, statusO = 0, opcion = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (gatito[i][j] == 'X')
				statusX++;
		}
		if (statusX == 3)
			cout << "Jugador 1 gana.";
		statusX = 0;
	}
	for (int k = 0; k < 3; k++)
	{
		for (int l = 0; l < 3; l++)
		{
			if (gatito[l][k] == 'X')
				statusX++;
		}
		if (statusX == 3)
			cout << "Jugador 1 gana.";
		statusX = 0;
	}
	int n = 0;
	for (int m = 0; m < 3; m++)
	{
		if (gatito[m][n] == 'X')
			statusX++;
		n++;
	}
	if (statusX == 3)
	{
		cout << "Jugador 1 gana." << endl;
		cout << "\n1. Jugar otra vez\t2. Salir";
		cin >> opcion;
	}
	statusX = 0;
	int p = 2;
	for (int o = 0; o < 3; o++)
	{
		if (gatito[o][p] == 'X')
			statusX++;
		p--;
	}
	if (statusX == 3)
		cout << "Jugador 1 gana.";


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (gatito[i][j] == 'O')
				statusO++;
		}
		if (statusO == 3)
			cout << "Jugador 2 gana.";
		statusO = 0;
	}
	for (int k = 0; k < 3; k++)
	{
		for (int l = 0; l < 3; l++)
		{
			if (gatito[l][k] == 'O')
				statusO++;
		}
		if (statusO == 3)
			cout << "Jugador 2 gana.";
		statusO = 0;
	}
	n = 0;
	for (int m = 0; m < 3; m++)
	{
		if (gatito[m][n] == 'O')
			statusO++;
		n++;
	}
	if (statusO == 3)
		cout << "Jugador 2 gana.";
	statusO = 0;
	p = 2;
	for (int o = 0; o < 3; o++)
	{
		if (gatito[o][p] == 'O')
			statusO++;
		p--;
	}
	if (statusO == 3)
		cout << "Jugador 2 gana.";
	_getch();
	return opcion;
}

void TresEnRaya::impresionDelJuego()
{
	cout << "\n\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "\t\t| ";
		for (int j = 0; j < 3; j++)
			cout << gatito[i][j] << " |";
		cout << endl << "\t\t|___|__|__|" << endl;
	}
}