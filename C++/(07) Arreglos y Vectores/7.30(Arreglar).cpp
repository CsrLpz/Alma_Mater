#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <conio.h>

void ordenamientoCubeta(int[], int);

int main()
{
	int arreglo1[] = { 97,3,100 };
	for(int i=0;i<10;i++)
	ordenamientoCubeta(arreglo1, 3);
	_getch();
}

void ordenamientoCubeta(int arreglo[], int sizeC)
{
	static int unidades = 10, unidades1 = 1;
	int arreglo2[10][2] = {};
	int l = 0, anterior = -1;
	for (int i = 0; i < sizeC; i++)
	{
		for (int j = 0; j < 2; j++)
		{/////////////////////////////////////////////////////////////////////////////////////////////
			anterior = 0;
			if (arreglo[i] >= 0 && arreglo[i] < 100)
			{
				if (arreglo2[j][anterior]!=0&&arreglo[i] == arreglo2[arreglo[i] % unidades][anterior])
					break;
				arreglo2[arreglo[i] % unidades / unidades1][j] = arreglo[i];	//Pasada de distribución.
				anterior++;
			}
			else if (arreglo[i] > 99 && arreglo[i] < 1000)
			{
				if (arreglo[i] == arreglo2[arreglo[i] % unidades][anterior])
					break;
				arreglo2[arreglo[i] % unidades / unidades1][j] = arreglo[i];
				anterior++;
			}
		}////////////////////////////////////////////////////////////////////////////////////////////
	}
	for (int k = 0; k < 10; k++)
		if (arreglo2[k][0] != 0)////////////////////////////////////////////
		{
			arreglo[l] = arreglo2[k][0];		//Pasada de recopilación.
			l++;
		}//////////////////////////////////////////////////////////////////
	unidades *= 10;
	unidades1 *= 10;
}