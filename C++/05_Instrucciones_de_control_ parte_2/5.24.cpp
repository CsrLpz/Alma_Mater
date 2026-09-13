#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <iomanip>
using std::setw;

int main()
{
    int tamanio = 0;

    cout << "Ingresa el tamaño del rombo: ";
    cin >> tamanio;

    if (tamanio <= 19)
    {
        for (int i = 1; i <= tamanio; i += 2)
        {
            cout << setw((tamanio - i) / 2 + 1) << "*";
            for (int j = 1; j < i; j++)
                cout << "*";
            cout << endl;
        }

        for (int i = (tamanio - 2); i >= 1; i -= 2) //Yo modifiqué esta línea, antes era "i = 7" pero como ahora es dinámico, es tamanio menos 2.
        {
            cout << setw((tamanio - i) / 2 + 1) << "*";
            for (int j = 1; j < i; j++)
                cout << "*";
            cout << endl;
        }
    }
    else
        cout << "Invalido" << endl;

    return 0;
}
