// Alma Mater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	unsigned n = 0;
	srand(time(0));
	for (int i = 0; i < 20; i++)
		cout << setw(5) << (1 + rand() % 100);	//(1<=n<=100)
	_getch();
}