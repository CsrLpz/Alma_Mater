#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;
using std::setw;

#include <math.h>

int main()
{
    cout << fixed << setprecision(2) << setw(10) << pow(2.5, 3) << endl;

    return 0;
}
