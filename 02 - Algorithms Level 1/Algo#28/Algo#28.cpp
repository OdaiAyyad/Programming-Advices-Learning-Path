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

enOddEven CheckOddEven(int N)
{
    if (N % 2 != 0)
        return enOddEven::Odd;
    else
        return enOddEven::Even;
}

int OddNumbersSummationUsingForLoop(int N)
{
    short Sum = 0;

    cout << "\nOdd numbers summation using For loop: ";
    for (int i = 1; i <= N; i++)
    {
        if(CheckOddEven(i) == enOddEven::Odd)
            Sum += i;
    }
    return Sum;
}

int OddNumbersSummationUsingWhileLoop(int N)
{
    short Sum = 0;
    int i = 1;

    cout << "\nOdd numbers summation using While loop: ";
    while (i <= N)
    {
        if (CheckOddEven(i) == enOddEven::Odd)
            Sum += i;
        i++;
    }
    return Sum;
}

int main()
{
    int N = ReadNumber();

    cout << OddNumbersSummationUsingForLoop(N) << endl;
    cout << OddNumbersSummationUsingWhileLoop(N) << endl;
    

    return 0;
}