#include <iostream>
#include <cmath>   // para round()
#include <iomanip> // para setprecision (opcional)
using namespace std;

int main()
{
    int capitalCentavos;
    double tasa;      // porcentaje, ej. 5 para 5%
    int periodos;

    cout << "Ingrese capital inicial (ej. 100.50): ";

    int dolares, centavos;
    char punto;

    cin >> dolares >> punto >> centavos;
    capitalCentavos = dolares * 100 + centavos;

    cout << "Ingrese tasa de interes anual (ej. 5 para 5%): ";
    cin >> tasa;

    cout << "Ingrese nero de anios: ";
    cin >> periodos;u

    // Aplicar interés compuesto
    for (int i = 0; i < periodos; i++)
        capitalCentavos = round(capitalCentavos * (1 + tasa / 100.0));

    // Separar dólares y centavos
    int resultadoDolares = capitalCentavos / 100;
    int resultadoCentavos = capitalCentavos % 100;

    // Imprimir con punto y cero a la izquierda si es necesario
    cout << "Monto final: " << resultadoDolares << ".";
    
    if (resultadoCentavos < 10)
        cout << "0";

    cout << resultadoCentavos << endl;

    return 0;
}