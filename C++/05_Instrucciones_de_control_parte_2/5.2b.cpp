#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
using std::left;

#include <iomanip>
using std::setw;
using std::setprecision;

int main()
{
    cout << fixed << left << setprecision(1) << setw(15) << 333.546372 << setprecision(2) << setw(15) << 333.546372 << setprecision(3) << setw(15) << 333.546372 << endl;
}
