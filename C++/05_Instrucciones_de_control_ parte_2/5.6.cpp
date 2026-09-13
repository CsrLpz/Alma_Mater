#include <iostream>

int main()
{
    int numero = 0;
    int suma = 0;

    for(int i = 0; i != 9999 ;)
    {
        std::cout << "Esribe un entero: ";
        std::cin >> numero;

        if(numero == 9999)
            break;

        suma += numero;
    }

    std::cout << "La suma de estos numeros es: " << suma;
    
    return 0;
}
