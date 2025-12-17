#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    short Time = 8;

    if (Time < 10)
    {
        cout << "Goog Morning.\n";
    }
    else if (Time < 20)
    {
        cout << "Good Day.\n";
    }
    else
    {
        cout << "Good Evening.\n";
    }

    return 0;
}