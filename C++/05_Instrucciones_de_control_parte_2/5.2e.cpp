#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int x = 1;

    for (x; x <= 20; x++)
    {
        cout << x;

        if (x % 5 == 0)
            cout << endl;
        else
            cout << "\t";
    }

    return 0;
}
