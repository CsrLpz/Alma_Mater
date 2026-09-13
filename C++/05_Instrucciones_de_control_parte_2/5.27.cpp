#include <iostream>
using std::cout;
using std::endl;

int main()
{
    for (int cuenta = 1; cuenta <= 10; cuenta++)
    {
        if (cuenta != 5) //Antes era "cuenta == 5".
            cout << cuenta << " "; //Aquí estaba "continue".
    }
    
    cout << "\nSe uso el equivalente estructurado de continue (!=) para no imprimir el 5 " << endl;
    
    return 0;
}
