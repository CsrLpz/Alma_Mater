//El programa calcularÃ¡ el producto de 3 enteros
#include <iostream>

int main()
{
	int x;
	int y;
	int z;
	int resultado;

	std::cout << "Escribe tres enteros.\n";
	std::cin >> x >> y >> z;
	resultado = x * y * z;

	std::cout << "El producto es " << resultado;

	return 0;
}