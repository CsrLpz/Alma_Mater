#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <conio.h>

int main()
{
	int option = 0, i = 0, j = 5, option1 = 0, l = 0;
	const int sizeArray = 10;
	int seating[sizeArray] = {};
	do
	{
		cout << "Please type 1 for 'First Class' or 2 for 'Second Class'. 3 to go out." << endl;
		cin >> option;
		if (option == 1)
		{
			for (int k = 0; k < 5; k++)
			{
				if (seating[i] == 0)
					seating[i]++;
				else if (seating[k] != 0)
					seating[i]++;
			}
			i++;
		}
		else if (option == 2||option1==1)
		{
			if (seating[j] == 0)
				seating[j]++;
			j++;
		}
	} while (option != 3);
	_getch();
}