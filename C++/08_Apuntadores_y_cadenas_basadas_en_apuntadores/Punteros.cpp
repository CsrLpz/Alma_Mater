#include <iostream>
#include <conio.h>
#include <cctype>

using namespace std;

void imprimirArreglo(const int[], const int);
void imprimirArreglo2(const int *const, const int);

int main()
{
	int a = 10;
	int *aPtr = 0;
	cout << &a << " != " << aPtr << endl;
	aPtr = &a;
	cout << &a << " = " << aPtr << endl;
	cout << a << " = " << *aPtr << endl;
	*aPtr = 56;
	cout << a << " = " << *aPtr << endl;
	const int tamanioArreglo = 10;
	int b[tamanioArreglo] = { 0,1,2,3,4,5,6,7,8,9 };
	int *bPtr = 0;
	cout << b << " != " << bPtr << endl;
	bPtr = b;
	cout << b << " = " << bPtr << endl;
	cout << b[0] << " = " << *bPtr << endl;
	cout << b[4] << " = " << bPtr[4] << " = " << *(b + 4) << " = " << *(bPtr + 4) << endl;
	imprimirArreglo(b, tamanioArreglo);
	imprimirArreglo2(b, tamanioArreglo);
	_getch();
}

void imprimirArreglo(const int B[], const int tamanio)
{
	for (int i = 0; i < tamanio; i++)
	{
		cout << &B[i] << ": ";
		cout << B[i] << " ";
	}
	cout << endl;
}

void imprimirArreglo2(const int *const B, const int tamanio)
{
	for (int j = 0; j < tamanio; j++)
	{
		cout << B + j << ": ";
		cout << *(B + j) << " ";
	}
}