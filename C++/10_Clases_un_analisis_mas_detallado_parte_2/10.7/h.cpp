#pragma once
#ifndef FECHA_H
#define FECHA_H

class Fecha
{
public:
	Fecha(int = 1, int = 1, int = 1900);
	void imprimir()const;
	int diasTotales();
	~Fecha();
private:
	int dia, mes, anio, diasEnTotal;
	int comprobarDia(int)const;
};

#endif