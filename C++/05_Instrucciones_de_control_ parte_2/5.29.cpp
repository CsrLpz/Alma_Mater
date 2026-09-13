#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setw;
using std::setprecision;

#include <cmath>
using std::pow;

int main()
{
    double monto;
    double principal = 24.0;

    for (int t = 5; t <= 10; t++)
    {
        double tasa = t / 100.0;  // Convierte 5 -> 0.05, 6 -> 0.06, etc.

        cout << "\n--- Tasa: " << t << "% ---" << endl;
        cout << "Año" << setw(21) << "Monto de deposito" << endl;
        cout << fixed << setprecision(2);

        for (int anio = 1; anio <= 400; anio++)
        {
            monto = principal * pow(1.0 + tasa, anio);

            cout << setw(4) << anio << setw(21) << monto << endl;
        }
    }
    return 0;
}
