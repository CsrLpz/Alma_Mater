#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

int main()
{
    double pi = 0;
    int terminos = 1000000;

    for (int i = 0; i < terminos; i++)
    {
        if (i % 2 == 0)
            pi += 4.0 / (2 * i + 1);
        else
            pi -= 4.0 / (2 * i + 1);
    }

    cout << fixed << setprecision(10);
    cout << "Pi aproximado: " << pi << endl;

    return 0;
}
