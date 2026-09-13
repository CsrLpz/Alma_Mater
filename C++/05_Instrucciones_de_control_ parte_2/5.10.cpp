#include <iostream>
using std::cout;
using std::endl;

int main()
{
    for(int i = 5; i > 0; i--)
    {
        int factorial = 1;

        for(int j = i; j > 0; j--)
            factorial *= j;

        cout << i << "! = " << factorial << endl;
    }

    return 0;
}
