// Alma Mater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int tiempo = 0;
	float cuota = 2.0;
	cout << "Cuanto timepo estuvo en el estacionamiento?\nTiempo: ";
	cin >> tiempo;
	if (tiempo < 3)
		cout << "Cuota: " << setprecision(4) << cuota;
	else if (tiempo > 3 && tiempo < 24)
		cout << "Cuota: " << setprecision(4) << cuota + (.50*(tiempo - 3));
	else
		cout << "Cuota: " << setprecision(4) << 10.0;
	_getch();
}