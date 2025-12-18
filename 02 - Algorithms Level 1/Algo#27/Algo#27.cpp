#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    short Num;

    cout << "Enter a number: "; cin >> Num;

    for (int i = Num; i >= 1; i--)
    {
        cout << i << endl;
    }

    return 0;
}