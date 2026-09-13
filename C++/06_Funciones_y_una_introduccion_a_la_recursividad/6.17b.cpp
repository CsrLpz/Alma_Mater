#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::srand;
using std::rand;

#include <ctime>
using std::time;

int main()
{
    int random = 0;

    srand(time(0));

    cout << 2 * (rand() % 5) + 1 << endl;

    return 0;
}

/*
    "rand() % 5" genera un número entre 0 y 4. Al multiplicarlo por 2 obtienes solo números pares:
    0 * 2 = 0
    1 * 2 = 2
    2 * 2 = 4
    3 * 2 = 6
    4 * 2 = 8
    Al sumarle 1 a cada uno los convierte en impares:
    0 + 1 = 1
    2 + 1 = 3
    4 + 1 = 5
    6 + 1 = 7
    8 + 1 = 9
    Entonces "2 * (rand() % 5) + 1" siempre genera un impar entre 1 y 9 sin necesidad de descartar nada.
*/
