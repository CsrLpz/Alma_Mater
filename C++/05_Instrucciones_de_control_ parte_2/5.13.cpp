#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int numero = 0;

    cout << "Introduce 5 numeros" << endl;

    for(int i = 1; i <= 5; i++)
    {
        cout << "Numero " << i << ": ";
        cin >> numero;
        
        if (numero >= 1 && numero <= 30)
            for(int j = 1; j <= numero; j++)
                cout << "*";
        else
        {
            cout << "Numero invalido." << endl;
            i--;
        }

        cout << endl;
    }

    return 0;
}
