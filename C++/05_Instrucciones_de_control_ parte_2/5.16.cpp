#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number = 0;
    int addition = 0;
    int i = 0;
    
    for (i = 0; ; i++)
    {
        cout << "Enter a number (9999 to finish): ";
        cin >> number;

        if (number == 9999)
            break;

        addition += number;
    }

    cout << "The averge is: " << addition / i;
    
    return 0;
}