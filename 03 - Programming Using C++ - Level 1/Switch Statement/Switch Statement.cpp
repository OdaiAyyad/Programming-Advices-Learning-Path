#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    short day = 4;

    switch (day)
    {
    case 1:
        cout << "Sun";
        break;
    case 2:
        cout << "Mon";
        break;
    case 3:
        cout << "Tue";
        break;
    case 4:
        cout << "Wed";
        break;
    case 5:
        cout << "Thu";
        break;
    case 6:
        cout << "Fri";
        break;
    case 7:
        cout << "Sat";
        break;
    default:
        cout << "Not a week day!\n";
    }

    return 0;
}