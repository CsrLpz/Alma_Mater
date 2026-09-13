#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

int main()
{
    int numeroProducto = 0;
    int cantidadVendida = 0;
    double totalVendido = 0;

    do
    {
        cout << "---PRODUCTOS---" << endl;
        cout << "\n1. Vaso $2.98\n2. Escritorio $4.50\n3. Smartphone $9.98\n4. Tripie $4.49\n5. Microfono $6.87\n6. Salir" << endl;

        cout << "\nNumero del producto: ";
        cin >> numeroProducto;

        if (numeroProducto != 6)
        {
            cout << "\nCantidad vendida: ";
            cin >> cantidadVendida;   
        }

        switch (numeroProducto)
        {
            case 1:
                totalVendido += 2.98 * cantidadVendida;
            break;

            case 2:
                totalVendido += 4.5 * cantidadVendida;
            break;

            case 3:
                totalVendido += 9.98 * cantidadVendida;
            break;

            case 4:
                totalVendido += 4.49 * cantidadVendida;
            break;

            case 5:
                totalVendido += 6.87 * cantidadVendida;
            break;

            case 6:
                cout << "Total a pagar: $" << fixed << setprecision(2) << totalVendido << endl;
            break;

            default:
                cout << "Opcion invalida" << endl;
        }
    } while (numeroProducto != 6);
    
    return 0;
}
