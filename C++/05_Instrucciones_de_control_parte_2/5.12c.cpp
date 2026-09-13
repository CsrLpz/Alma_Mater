#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    int bandera = 1;

    for(int i = 10; i > 0; i--)
    {
        cout << setw(bandera);

        for(int j = i; j > 0; j--)
            cout << "*";
        
        bandera++;
        
        cout << endl;
    }

    return 0;
}
