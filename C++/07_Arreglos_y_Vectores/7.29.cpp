#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <conio.h>

void primeNumber(bool[], int);

int main()
{
	const int sizeArray = 1000;
	bool primeNumbers[sizeArray];
	for (int i = 0; i < sizeArray; i++)
		primeNumbers[i] = true;
	primeNumber(primeNumbers, sizeArray);
	_getch();
}

void primeNumber(bool prime[], int size)
{
	int provicional = 2;
	do
	{
		for (int j = 3; j < size; j++)
		{
			while (j != provicional && j >= provicional && j%provicional == 0 && prime[j] == true)
				prime[j] = false;
		}
		provicional++;
	} while (provicional != 1001);
	for (int k = 2; k < size; k++)
		cout << "prime[" << k << "] = " << prime[k] << endl;
}