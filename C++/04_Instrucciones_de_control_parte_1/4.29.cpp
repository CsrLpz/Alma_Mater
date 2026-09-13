#include "iostream"
using std::cout;
using std::endl;

int main()
{
	int numero = 2;
	
	while (true)
	{
		cout << numero << ", ";
		numero *= 2;
	}

	return 0;
}