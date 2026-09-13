#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
	int number1 = 0, number2 = 0, studentAnswer = 0, trueAnswer = 0, option = 0;
	number1 = rand() % 10;
	number2 = rand() % 10;
	do
	{
		cout << "Cuanto es " << number1 << " por " << number2 << "\n\nRespuesta: ";
		cin >> studentAnswer;
		trueAnswer = number1*number2;
		if (studentAnswer != trueAnswer)
			cout << "\n\nNo. Por favor intenta de nuevo." << endl;
		else
		{
			cout << "Muy bien!\n\nPresiona 1 para salir. 2 para continuar." << "\n\nOpcion: ";
			cin >> option;
		}
	} while (studentAnswer != trueAnswer || option == 2);
	_getch();
}