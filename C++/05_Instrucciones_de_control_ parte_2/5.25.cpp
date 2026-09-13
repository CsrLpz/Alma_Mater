#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int cuenta;

    for (cuenta = 1; cuenta <= 10; cuenta++) //for (cuenta = 1; cuenta <= 10 && cuenta != 5; cuenta++)
    {
        if (cuenta == 5)        //ESTA MAL
            cuenta = 10;        //DEBIO SER COMO EL for
        
        cout << cuenta << " ";
    }
    
    cout << "\nSalio del ciclo en cuenta = " << cuenta << endl;
    
    return 0;
}
