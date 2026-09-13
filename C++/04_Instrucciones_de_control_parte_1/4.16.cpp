#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int opcion = 0;
	int horas = 0;
	float tarifa = 0;
	float horasExtra = 0;
	float salarioHorasExtra = 0;

	while (opcion != 2)
	{
		cout << "Introduzca las horas trabajadas: ";
		cin >> horas;
		cout << "Introduzca la tarifa por horas del empleado ($00.00): ";
		cin >> tarifa;

		horasExtra = horas - 40;

		if (horasExtra > 0)
		{
			salarioHorasExtra = horasExtra * (tarifa / 2);
			cout << "\nEl salario es: " << horas * tarifa + salarioHorasExtra;
		}
		else
			cout << "El salario es: " << horas * tarifa;

		cout << "\n\nDesea continuar?\n1. Si\t2. No" << endl;
		cin >> opcion;
	}

	return 0;
}