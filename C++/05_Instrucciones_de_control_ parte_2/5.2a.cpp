#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int suma = 0;
    int cuenta = 0;
    
    for(cuenta; cuenta < 100; cuenta++)
        if(cuenta % 2 != 0)
            suma += cuenta;

    cout << "La suma de impares es: " << suma << endl;
        
    return 0;
}
