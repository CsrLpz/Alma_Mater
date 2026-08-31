#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstring>
using std::strcpy;
using std::strcmp;
using std::strcat;
using std::strlen;
using std::strtok;
#include <conio.h>

int main()
{
	const int tamanioArreglo = 100;
	float numero1 = 7.3, numero2 = 0;
	char *ptr, s1[tamanioArreglo] = { "Hola mundo" }, s2[tamanioArreglo] = { "Mi primer programa en C++" };
	double *fPtr;	//a)
	//fPtr = &numero1;	//b)
	//cout <<"El valor de *fPtr es "<< *fPtr << endl;	//c)
	//numero2 = *fPtr;	//d)
	cout << "El valor de numero2 es " << numero2 << endl;	//e)
	cout << "La direccion de numero1 es " << &numero1 << endl;	//f)
	//cout << "La direccion almacenada en fPtr es " << fPtr << endl;	//g)
	strcpy_s(s1, s2);	//h)
	cout << "strcmp(s1, s2) = " << strcmp(s1, s2) << endl;	//i)
	strncat_s(s1, s2, 10);	//j)
	cout << "strnlen(s1) = " << strlen(s1) << endl;
	//ptr = strtok_s(s2, ",");
	_getch();
	return 0;
}