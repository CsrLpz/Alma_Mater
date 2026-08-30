#include <iostream>
using std::cout;
using std::endl;
#include <conio.h>

int main()
{
	long int valor1 = 200000, valor2 = 0, *longPtr = NULL;	//a)
	longPtr = &valor1;	//b)
	cout << *longPtr << endl;	//c)
	valor2 = *longPtr;	//d)
	cout << valor2 << endl;	//e)
	cout << &valor1 << endl;	//f)
	cout << longPtr << endl;	//g)
	_getch();
	return 0;
}