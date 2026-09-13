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
    double monto = 0;
    double principal = 1000;
    double tasa = .05;

    cout << fixed << setprecision(2);

    for(int i = 1; i <= 6; i++)
    {
        cout << "\nTasa: " << tasa * 100 << "%" << endl;
        cout << setw(4) << "Anio" << setw(21) << "Monto en deposito" << endl;

        for(int anio = 1; anio <= 10; anio++)
        {
            monto = principal * pow(1.0 + tasa, anio);

            cout << setw(4) << anio << setw(21) << monto << endl;
        }

        tasa += .01;
    }

    return 0;
}
