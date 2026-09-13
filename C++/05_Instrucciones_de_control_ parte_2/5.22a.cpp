#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int x = 4;
    int y = 7;

    cout << (!(x < 5) && !(y >= 7)) << endl;
    cout << !(( x < 5) || (y >= 7)) << endl;

    return 0;
}
