#include <iostream>
using std::cout;
using std::endl;

int main()
{
    for(int i = 10; i >= 1; i--)
    {
        for(int j = i; j <= 10; j++)
            cout << "*";
        
        cout << endl;
    }

    return 0;
}
