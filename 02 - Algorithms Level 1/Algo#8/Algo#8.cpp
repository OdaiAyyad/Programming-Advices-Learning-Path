#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    short Mark;

    cout << "Enter your mark: "; cin >> Mark;

    if (Mark >= 50)
    {
        cout << "PASS!\n";
    }
    else
    {
        cout << "Fail.\n";
    }

    return 0;
}