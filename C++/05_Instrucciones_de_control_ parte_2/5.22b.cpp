#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int a = 4;
    int b = 4;
    int g = 9;

    cout << (!(a == b) || !(g != 5)) << endl;
    cout << !(( a == b) && (g != 5)) << endl;

    return 0;
}
