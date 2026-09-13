// Alma Mater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

void perfecto();

int main()
{
	cout << "Numeros perfectos" << endl;
	perfecto();
	_getch();
}

void perfecto()
{
	for (int i = 1; i <= 1000; i++)
		cout << (pow(2, i - 1))*(pow(2, i) - 1) << endl;
}