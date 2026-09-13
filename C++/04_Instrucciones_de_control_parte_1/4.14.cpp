#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int numeroDeCuenta = 0;
	float saldoInicioMes = 0;
	float totalCargosMes = 0;
	float totalCreditosMes = 0;
	float limiteCredito = 0;
	float nuevoSaldo = 0;
	int opcion = 0;

	while (opcion != 1)
	{
		cout << "Ingrese los datos del cliente." << endl;
		cout << "Numero de cuenta: ";
		cin >> numeroDeCuenta;
		cout << "Saldo al inicio del mes: ";
		cin >> saldoInicioMes;
		cout << "Total de cargos en articulos: ";
		cin >> totalCargosMes;
		cout << "Total de creditos: ";
		cin >> totalCreditosMes;
		cout << "Limite de credito: ";
		cin >> limiteCredito;

		nuevoSaldo = saldoInicioMes + (totalCargosMes - totalCreditosMes);

		cout << "Nuevo saldo: " << nuevoSaldo << endl;

		if (nuevoSaldo > limiteCredito)
		{
			cout << "\n\nNumero de cuenta: " << numeroDeCuenta << endl;
			cout << "Limite de credito: " << limiteCredito << endl;
			cout << "Se excedio el limite de su credito." << endl;
		}

		cout << "\nDesea salir?\n1. Si\t2 No";
		cin >> opcion;
	}

	return 0;
}