#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    for (int i = 1; i <= 9; i += 2)
    {
        cout << setw((9 - i) / 2 + 1) << "*";
        for (int j = 1; j < i; j++)
            cout << "*";
        cout << endl;
    }

    for (int i = 7; i >= 1; i -= 2)     //NO LO HICE YO, LO HIZO Claude
    {
        cout << setw((9 - i) / 2 + 1) << "*";
        for (int j = 1; j < i; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
