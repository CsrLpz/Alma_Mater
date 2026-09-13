#include <iostream>
using std::cout;
using std::endl;
using std::dec;
using std::oct;
using std::hex;

#include <iomanip>
using std::setw;

#include <bitset>
using std::bitset;

int main()
{
    cout << "_________________________________________________" << endl;
    cout << setw(7) << "|Decimal |" << setw(13) << " Binario |" << setw(13) << " Octal |" << setw(13) << " Hexadecimal|" << endl;
    cout << "_________________________________________________" << endl;

    for (int i = 1; i <= 256; i++)
        cout << "|" << setw(7) << dec << i << " | " << setw(10) << bitset<9>(i) << " | "<< setw(10) << oct << i << " | " << setw(10) << hex << i << " |" << endl;

    cout << "_________________________________________________" << endl;

    return 0;
}
