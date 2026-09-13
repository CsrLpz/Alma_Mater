#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int i = -4;
    int j = 6;

    cout << !((i > 4) || (j <= 6)) << endl; //0
    cout << (!(i > 4) && !(j <= 6)) << endl; //0

    return 0;
}
