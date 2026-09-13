#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setw;
using std::setprecision;

int main()
{
    int numeroDeEmpleado = 0;
    double horas = 0.0;
    double sueldo = 0.0;
    double horasExtra = 0.0;
    double ventas = 0.0;
    int totalPiezas = 0;

    do {
        cout << "\n1. Gerente\n2. Trabajador por hora\n3. Trabajador por comision\n4. Trabajador por pieza\n5. Salir" << endl;
        cout << "Numero de empleado: ";
        cin >> numeroDeEmpleado;

        switch (numeroDeEmpleado)
        {
            case 1:
                cout << "Sueldo semanal: $" << 500 << endl;
            break;

            case 2:
                cout << "Introduzca el total de horas trabajadas" << endl;
                cout << "Horas: ";
                cin >> horas;
                
                if (horas > 40) {
                    horasExtra = horas - 40;
                    horasExtra *= 6.25;
                    sueldo = horas * 12.5 + horasExtra;
                } else {
                    sueldo = horas * 12.5;
                }

                cout << "Sueldo semanal: $" << sueldo << endl;
            break;

            case 3:
                cout << "Ingresa tus ventas en la semana: ";
                cin >> ventas;

                sueldo = 250 + ventas * .57;

                cout << "Sueldo semanal: $" << sueldo << endl;
            break;

            case 4:
                cout << "Ingresa cuantas piezas hiciste en la semana: ";
                cin >> totalPiezas;

                totalPiezas *= 20;

                cout << "Sueldo semanal: $" << totalPiezas << endl;
            break;
            
            default:
                cout << "Opcion invalida." << endl;
            break;
        }
    } while(numeroDeEmpleado != 5);

    cout << "Adios!" << endl;

    return 0;
}
