#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int suma = 0;

    for(int i = 1; i <= 15; i++)
        if(i % 2 != 0)
            suma += i;

    cout << "La suma de los impares es: " << suma << endl;

    return 0;
}
