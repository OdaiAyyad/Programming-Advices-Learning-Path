#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int EvenNumbersSummation(short Num)
{
    short Sum = 0;

    for (int i = 1; i <= Num; i++)
    {
        if (i % 2 == 0)
        {
            Sum += i;
        }
    }
    return Sum;
}

int main()
{
    short Num, Sum = 0;

    cout << "Enter a number: "; cin >> Num;

    cout << EvenNumbersSummation(Num);

    return 0;
}