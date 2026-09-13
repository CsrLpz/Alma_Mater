#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <conio.h>

int main()
{
	///////////////////////////////////////////////////////////////////////////
	const int TAMANIO = 5;
	unsigned int valores[TAMANIO] = { 2,4,6,8,10 }, *vPtr = NULL;	//a) y b)
	//////////////////////////////////////////////////////////////////////////
	cout << "Notacion de subindices de arreglo." << endl;
	for (int i = 0; i < TAMANIO; i++)
		cout << "valores[" << i << "]: " << valores[i] << endl;	//c)
	cout << endl;
	//////////////////////////////////////////////////////////////////////////
	vPtr = valores;
	vPtr = &valores[0];	//d)
	//////////////////////////////////////////////////////////////////////////
	cout << "Notacion apuntador/desplazamiento." << endl;
	for (int j = 0; j < TAMANIO; j++)
		cout << "*(vPtr + " << j << "): " << *(vPtr + j) << endl;	//e)
	cout << endl;
	/////////////////////////////////////////////////////////////////////////
	cout << "Notacion apuntador/desplazamiento, usando nombre de arreglo como apuntador." << endl;
	for (int k = 0; k < TAMANIO; k++)
		cout << "*(valores + " << k << "): " << *(valores + k) << endl;	//f)
	cout << endl;
	/////////////////////////////////////////////////////////////////////////
	cout << "Uso de subindices con el apuntador al arreglo." << endl;
	for (int l = 0; l < TAMANIO; l++)
		cout << "vPtr[" << l << "]: " << vPtr[l] << endl;	//g)
	cout << endl;
	/////////////////////////////////////////////////////////////////////////
	cout << "valores[4]: " << valores[4] << endl;
	cout << "*(valores + 4): " << *(valores + 4) << endl;
	cout << "vPtr[4]: " << vPtr[4] << endl;					//h)
	cout << "*(vPtr + 4): " << *(vPtr + 4) << endl;
	/////////////////////////////////////////////////////////////////////////
	_getch();
	return 0;
}