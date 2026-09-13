#pragma once
#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo
{
public:
	Rectangulo(double = 0.0, double = 0.0);
	~Rectangulo();
	void establecerDatos();
	void obtenerDatos();
	double perimetro();
	double area();
	void cuadrado();
private:
	double longitud, anchura;
};
#endif