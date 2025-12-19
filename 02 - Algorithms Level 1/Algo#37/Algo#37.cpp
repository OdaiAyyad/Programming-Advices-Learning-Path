#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int Num;

    cout << "Enter a number: "; cin >> Num;

    while (Num != -99)
    {
        cout << "Enter a number: "; cin >> Num;
    }

    return 0;
}