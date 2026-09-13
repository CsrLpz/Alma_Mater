/* En el libro te muestra solo el código de los 'for' y te pregunta, "¿Qué hace este programa?"
yo deduje correctamente el patrón que imprimía.*/
#include <iostream>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 4; k++)
                std::cout << "*";
            
            std::cout << std::endl;
        }
    
    std::cout << std::endl;
    }
}
