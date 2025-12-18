#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    short Num, Sum = 0;

    cout << "Enter a number: "; cin >> Num;

    if (Num % 2 == 0)
    {
        for (int i = 2; i <= Num; i++)
        {
            Sum += Num;
        }
    }
    cout << Sum;

    return 0;
}