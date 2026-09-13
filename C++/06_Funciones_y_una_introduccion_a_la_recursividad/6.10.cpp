#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cmath>
using std::pow;

inline double volumenEsfera(double r)
{
    return (4.0 / 3.0) * 3.14159 * pow(r, 3);
}

int main()
{
    double radio = 0.0;

    cout << "Ingresa el radio de una esfera: ";
    cin >> radio;

    cout << "Volumen de una esfra con radio " << radio << " es " << volumenEsfera(radio) << endl;
    
    return 0;
}
