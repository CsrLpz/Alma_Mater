#include "iostream"
using std::cout;
using std::endl;

int main()
{
	int bandera1 = 0;

	while (bandera1 <= 7)
	{
		int bandera2 = 0;
		while (bandera2 <= 7)
		{
			cout << "* ";
			bandera2++;
		}
		cout << endl;
		if (bandera1 % 2 == 0)
			cout << ' ';
		bandera1++;
	}
}