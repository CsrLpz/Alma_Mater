#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int numero = 0;

    cout << "Introduce un entero: ";
    cin >> numero;
    
    for(int i = 1; i <= numero; i++)
        cout << i * 100 << "\t";

    return 0;
}
