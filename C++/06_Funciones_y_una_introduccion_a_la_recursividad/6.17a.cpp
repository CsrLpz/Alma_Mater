#include <iostream>
using std::cout;
using std::endl;

#include <cmath>
using std::srand;

#include <ctime>
using std::time;

int main()
{
    int random = 0;

    srand(time(0));

    do {
        random = 2 + rand() % 10;
    } while(random % 2 != 0);
        
    cout << random << endl;

    return 0;
}
