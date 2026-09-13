#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    int bandera = 9;

    for(int i = 1; i <= 10; i++)
    {
        cout << setw(bandera);

        for(int j = i; j >= 1; j--)
            cout << "*";
        
        bandera++;
        
        cout << endl;
    }

    return 0;
}
