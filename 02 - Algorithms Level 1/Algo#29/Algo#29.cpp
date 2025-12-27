#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enOddEven { Odd = 1, Even = 2 };

int ReadNumber() 
{
    int N;
    cout << "Enter a number: "; cin >> N;

    return N;
}

int EvenNumbersSummationUsingForLoop(int N)
{
    short Sum = 0;

    cout << "\nEven numbers summation using For loop: ";
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            Sum += i;
        }
    }
    return Sum;
}

int EvenNumbersSummationWhileLoop(short Num)
{
    short Sum = 0;
    int i = 1;

    while (i <= Num)
    {
        if (i % 2 == 0)
        {
            Sum += i;
        }
        i++;
    }
    return Sum;
}

int main()
{
    int N = ReadNumber();

    cout << EvenNumbersSummationForLoop(Num1) << endl << endl;
    cout << EvenNumbersSummationWhileLoop(Num2) << endl;

    return 0;
}