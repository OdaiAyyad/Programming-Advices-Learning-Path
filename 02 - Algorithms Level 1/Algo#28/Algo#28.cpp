#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int OddNumbersSummationForLoop(short Num)
{
    short Sum = 0;

    for (int i = 1; i <= Num; i++)
    {
        if (i % 2 != 0)
        {
            Sum += i;
        }
    }
    return Sum;
}

int OddNumbersSummationWhileLoop(short Num)
{
    short Sum = 0;
    int i = 1;
    while (i <= Num)
    {
        if (i % 2 != 0)
        {
            Sum += i;
        }
        i++;
    }
    return Sum;
}

int main()
{
    short Num1, Num2;

    cout << "Enter a number: "; cin >> Num1;
    cout << OddNumbersSummationForLoop(Num1) << endl;
        
    cout << "\n\n";

    cout << "Enter a number: "; cin >> Num2;
    cout << OddNumbersSummationWhileLoop(Num2) << endl;

    return 0;
}