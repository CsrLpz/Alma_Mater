#ifndef COMPLEJO_H
#define COMPLEJO_H

class Complejo
{
public:
	Complejo(double = 0.0, double = 0.0);
	~Complejo();
	void obtenerNumeros(double, double);
	double parteReal();
	double parteImaginaria();
private:
	double parteRe, parteIm;
};

#endif