#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;


int main()
{
	int number1 = 0, number2 = 0, studentAnswer = 0, trueAnswer = 0, option = 0, resSwitch = 0;
	srand(time(0));
	number1 = 1 + rand() % 10;
	number2 = 1 + rand() % 10;
	
	do
	{
		cout << "Cuanto es " << number1 << " por " << number2 << "\n\nRespuesta: ";
		cin >> studentAnswer;
		trueAnswer = number1*number2;
		resSwitch = 1 + rand() % 4;
		if (studentAnswer == trueAnswer)
		{
			switch (resSwitch)
			{
			case 1:
				cout << "Muy bien!" << endl;
				break;
			case 2:
				cout << "Excelente!" << endl;
				break;
			case 3:
				cout << "Buen trabajo!" << endl;
				break;
			case 4:
				cout << "Sigue asi!" << endl;
				break;
			}
			cout << "\nPresiona 1 para salir. 2 para continuar." << "\n\nOpcion: ";
			cin >> option;
		}
		else
		{
			switch (resSwitch)
			{
			case 1:
				cout << "No. Por favor intenta de nuevo." << endl;
				break;
			case 2:
				cout << "Incorrecto. Intenta una vez mas." << endl;
				break;
			case 3:
				cout << "No te rindas!" << endl;
				break;
			case 4:
				cout << "No. Sigue intentando." << endl;
				break;
			}
		}
	} while (studentAnswer != trueAnswer || option == 2);
	_getch();
}