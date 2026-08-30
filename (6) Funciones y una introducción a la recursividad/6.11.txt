// Alma Mater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	double xa = 7.5, xb = 7.5, xc = 0.0, xd = 0.0, xe = -6.4, xf = -6.4, xg;
	cout << "x = fabs(7.5): " << fabs(xa) << endl;
	cout << "x = floor(7.5): " << floor(xb) << endl;
	cout << "x = fabs(0.0): " << fabs(xc) << endl;
	cout << "x = ceil(0.0): " << ceil(xd) << endl;
	cout << "x = fabs(-6.4): " << fabs(xe) << endl;
	cout << "x = ceil(-6.4): " << ceil(xf) << endl;
	cout << "x = ceil(-fabs(-8 + floor(-5.5))): " << ceil(-fabs(-8+floor(-5.5)));
	_getch();
}