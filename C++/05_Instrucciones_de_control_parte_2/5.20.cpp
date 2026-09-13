#include <iostream>
using std::cout;
using std::endl;

#include <cmath>
using std::pow;

int main()
{
    int tripleDePitagoras = 0;

    for (int i = 1; i <= 500; i++)
        for (int j = 1; j <= i; j++)
            for (int k = 1; k <= j; k++)
                if (pow(k, 2) + pow(j, 2) == pow(i, 2))
                    tripleDePitagoras++;

    cout << "Hay en total " << tripleDePitagoras << " triples de pitagoras que no sean mayores de 500." << endl;

    return 0;
}
