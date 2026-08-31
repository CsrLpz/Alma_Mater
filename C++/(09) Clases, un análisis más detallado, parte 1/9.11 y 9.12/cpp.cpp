#include "Rectangulo.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

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
	cout << "Perimetro: " << perimetro() << endl;
	cout << "Area: " << area() << endl
		;
	if (longitud == anchura)
		cuadrado();
}

void Rectangulo::cuadrado()
{
	cout << "Esto es un cuadrado (?)" << endl;
}