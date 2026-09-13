#include "iostream"

int main()
{
	int x, y;
	std::cout << "Ingresa dos numeros.\nNumero 1: ";
	std::cin >> x;
	std::cout << "Numero 2: ";
	std::cin >> y;

	std::cout << "Suma: " << x << " + " << y << " = " << x + y << std::endl;;
	std::cout << "Producto: " << x << " x " << y << " = " << x * y << std::endl;
	std::cout << "Diferencia: " << x << " - " << y << " = " << x - y << std::endl;
	std::cout << "Cociente: " << x << " / " << y << " = " << x / y << std::endl;

	return 0;
}