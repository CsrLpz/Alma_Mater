#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <conio.h>

void comoFunciona(int[][10]);

int main()
{
	int Array[10][10] = {};
	comoFunciona(Array);
	_getch();
}

void comoFunciona(int arreglo[][10])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
			cout<<++arreglo[i][j];
		cout << endl;
	}
}