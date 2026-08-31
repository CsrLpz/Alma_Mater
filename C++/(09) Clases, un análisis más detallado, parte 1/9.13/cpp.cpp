#include "Rectangulo.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;

Rectangulo::Rectangulo(double l, double a)
{
	longitud = l;
	anchura = a;
	establecerDatos();
}

Rectangulo::~Rectangulo()
{

}

void Rectangulo::establecerDatos()
{
	int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	cout << "Ingrese la primer coordenada en x: ";
	cin >> x1;
	x1 = (x1 >= 0.0&&x1 <= 20.0) ? x1 : 0.0;
	cout << "Ingrese la segunda coordenada en x: ";
	cin >> x2;
	x2 = (x2 >= x1&&x2 <= 20.0) ? x2 : 0.0;
	longitud = x2 - x1;
	cout << "Ingrese la primer coordenada en y: ";
	cin >> y1;
	y1 = (y1 >= 0.0&&y1 <= 20.0) ? y1 : 0.0;
	cout << "Ingrese la segunda coordenada en y: ";
	cin >> y2;
	y2 = (y2 >= y1&&y2 <= 20.0) ? y2 : 0.0;
	anchura = y2 - y1;
}

double Rectangulo::perimetro()
{
	return 2 * (longitud + anchura);
}

double Rectangulo::area()
{
	return longitud*anchura;
}

void Rectangulo::obtenerDatos()
{
	system("cls");
	cout << "\t\t\nPerimetro: " << perimetro();
	cout << "\t\t\tArea: " << area() << endl;
	if (longitud == anchura)
		cuadrado();
	establecerCaracterPerimetro();
}

void Rectangulo::cuadrado()
{
	cout << "\n\nEsto es un cuadrado (?)" << endl;
}

void Rectangulo::establecerCaracterRelleno()
{
	char caracterR;
	cout << "Ingrese el caracter de relleno." << endl;
	cin >> caracterR;
}

void Rectangulo::establecerCaracterPerimetro()
{
	char caracterP;
	cout << "Ingrese el caracter de perimetro." << endl;
	cin >> caracterP;
}

void Rectangulo::dibujar(char relleno, char perimetro)
{
	int k = 0;
	for (int i = 0; i < anchura; i++)
	{
		cout << perimetro;
		for (int j = 0; j <= longitud - 3; j++)
		{
			if (k == 0)
				cout << perimetro;
			else if (k == anchura-1)
				cout << perimetro;
			else
				cout << relleno;
		}
		k++;
		cout << perimetro << endl;
	}
}