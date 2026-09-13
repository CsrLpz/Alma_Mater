#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int x = 3;
    int y = 20;

    cout << !((x <= 8) && (y > 4)) << endl; //0
    cout << (!( x <= 8) || !(y > 4)) << endl; //0

    return 0;
}
