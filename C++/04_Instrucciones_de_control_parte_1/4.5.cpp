#include "iostream"

int main()
{
	int suma = 0, x = 1;

	while (x <= 10)
	{
		suma += x;
		++x;
	}

	std::cout << "La suma es: " << suma << std::endl;
}
