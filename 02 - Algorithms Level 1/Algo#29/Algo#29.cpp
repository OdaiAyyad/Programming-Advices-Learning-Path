#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    short Num, Sum = 0;

    cout << "Enter a number: "; cin >> Num;

    for (int i = 1; i <= Num; i++)
    {
        if (i % 2 == 0)
        {
            Sum += i;
        }
    }
    cout << Sum;

    return 0;
}