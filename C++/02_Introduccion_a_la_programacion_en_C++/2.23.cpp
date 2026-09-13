#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num1, num2, num3, num4, num5;
	cout << "Dame 5 numeros: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;

	if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
		cout << "Mayor: " << num1 << endl;
	if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
		cout << "Mayor: " << num2 << endl;
	if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5)
		cout << "Mayor: " << num3 << endl;
	if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5)
		cout << "Mayor: " << num4 << endl;
	if (num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4)
		cout << "Mayor: " << num5 << endl;

	if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
		cout << "Menor: " << num1 << endl;
	if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
		cout << "Menor: " << num2 << endl;
	if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
		cout << "Menor: " << num3 << endl;
	if (num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5)
		cout << "Menor: " << num4 << endl;
	if (num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4)
		cout << "Menor: " << num5 << endl;
}