#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;


int main()
{
	int number1 = 0, number2 = 0, studentAnswer = 0, trueAnswer = 0, resSwitch = 0, goodAnswer = 0, wrongAnswer = 0;
	float porcentaje = 0;
	srand(time(0));
	do
	{
		number1 = 1 + rand() % 10;
		number2 = 1 + rand() % 10;
		cout << "Cuanto es " << number1 << " por " << number2 << "\n\nRespuesta: ";
		cin >> studentAnswer;
		trueAnswer = number1*number2;
		resSwitch = 1 + rand() % 4;
		if (studentAnswer == trueAnswer)
		{
			goodAnswer++;
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
		}
		else
		{
			wrongAnswer++;
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
	} while (goodAnswer + wrongAnswer < 10);

	porcentaje = goodAnswer + wrongAnswer;
	porcentaje *= .75;
	if (wrongAnswer>porcentaje)
		cout << "\n\nPor favor pida ayuda adicional a su instructor." << endl;
	_getch();
}