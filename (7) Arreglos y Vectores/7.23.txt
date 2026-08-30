#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <conio.h>

void logo(char[][20], int, int);
void pintarAbajo(char[][20], int&, int&);
void pintarArriba(char[][20], int&, int&);
void pintarDerecha(char[][20], int&, int&);
void pintarIzquierda(char[][20], int&, int&);
void mostrarCamino(char[][20], int, int);

static int nPosicion_actual_x = 0, nPosicion_actual_y = 0;

int main()
{
	const int x = 20, y = 20;
	char nPiso[x][y];
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			nPiso[i][j] = ' ';
	cout << "\t\tSelecciones alguna opcion." << endl;
	cout<< "1. Dibujar arriba.\n2. Dibuar abajo.\n3. Voltear a la derecha.\n4. Voltear a la izquierda.\n9. Terminar.\n6. Imprimir arreglo al terminar.\n\nOpcion: ";
	logo(nPiso, x, y);
	_getch();
	return 0;
}

void logo(char nPiso[][20], int x, int y)
{
	int nOpc = 0;
	cin >> nOpc;
	while (nOpc != 9)
	{
		switch (nOpc)
		{
		case 1:
			pintarArriba(nPiso, nPosicion_actual_x, nPosicion_actual_y);
			break;
		case 2:
			pintarAbajo(nPiso, nPosicion_actual_x, nPosicion_actual_y);
			break;
		case 3:
			pintarDerecha(nPiso, nPosicion_actual_x, nPosicion_actual_y);
			break;
		case 4:
			pintarIzquierda(nPiso, nPosicion_actual_x, nPosicion_actual_y);
			break;
		default:
			cout << "Seleccione una opcion correcta: ";
			break;
		}
		cout << endl << "Opcion: ";
		cin >> nOpc;
	}
	cout << "Terminado, presione 6 para mostrar.";
	cin >> nOpc;
	if (nOpc == 6)
	{
		system("cls");
		mostrarCamino(nPiso, x, y);
	}
}

void pintarArriba(char nPiso[][20], int &x_Actual, int &y_Actual)
{
	int nCantidad = 0;
	cout << "Y: ";
	cin >> nCantidad;
	for (int x = 0; x < nCantidad; x++)   //Si voy hacia abajo/arriba  se mueve 'x' y no 'y'.
	{
		if (x_Actual<0)
		{
			cout << "LLegasta al limite";
			break;
		}
		else
		{
			nPiso[x_Actual][y_Actual] = 'x';
			x_Actual--;
		}
	}
	x_Actual++;
}

void pintarAbajo(char nPiso[][20], int &x_Actual, int &y_Actual)
{
	int nCantidad = 0;
	cout << "-Y: ";
	cin >> nCantidad;
	for (int y = 0; y < nCantidad; y++)
	{
		if (x_Actual>20)
		{
			cout << "LLegasta al limite";
			break;
		}
		else
		{
			nPiso[x_Actual][y_Actual] = 'x';
			x_Actual++;
		}
	}
	x_Actual--;
}

void pintarDerecha(char nPiso[][20], int &x_Actual, int &y_Actual)	   //Si voy a la derecha/izquierda se mueve 'y' y no 'x'.
{
	int nCantidad = 0;
	cout << "X: ";
	cin >> nCantidad;
	for (int y = 0; y < nCantidad; y++)
	{
		if (y_Actual>20)
		{
			cout << "LLegasta al limite";
			break;
		}
		else
		{
			nPiso[x_Actual][y_Actual] = 'x';
			y_Actual++;
		}
	}
	y_Actual--;
}

void pintarIzquierda(char nPiso[][20], int &x_Actual, int &y_Actual)
{
	int nCantidad = 0;
	cout << "-X: ";
	cin >> nCantidad;
	for (int y = 0; y < nCantidad; y++)
	{
		if (y_Actual<0)
		{
			cout << "LLegasta al limite";
			break;
		}
		else
		{
			nPiso[x_Actual][y_Actual] = 'x';
			y_Actual--;
		}
	}
	y_Actual++; //Se desplaza por columnas.
}

void mostrarCamino(char nPiso[][20], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
			cout << nPiso[i][j];
		cout << endl;
	}
}