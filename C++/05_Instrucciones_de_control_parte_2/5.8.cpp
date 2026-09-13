#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int bandera = 0;
    int numero = 0;
    int menor = 0;

    cout << "Escribe varios enteros.\nNumero: ";
    cin >> numero;

    menor = numero;
    bandera = numero;

    for(int i = 2; i <= bandera; i++)
    {
        cout << "Numero: ";
        cin >> numero;

        if(numero < menor)
            menor = numero;
    }

    cout << "El numero menor de esa serie es: " << menor << endl;

    return 0;
}
