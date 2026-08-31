#pragma once
#ifndef RACIONAL_H
#define RACIONAL_H

class Racional
{
public:
	Racional(int = 0, int = 0);
	~Racional();
	void establecerFraccion();
	void simplificar(int, int);
	void suma();
	void resta();
	void multiplicacion();
	void division();
private:
	int numerador, denominador;
};

#endif