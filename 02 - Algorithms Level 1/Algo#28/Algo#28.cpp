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
    int counter = 0;

    cout << "\nOdd numbers summation using While loop: ";
    while (counter < N)
    {
        counter++;
        if (CheckOddEven(counter) == enOddEven::Odd)
            Sum += counter;
    }
    return Sum;
}

int OddNumbersSummationUsingDoWhileLoop(int N)
{
    short Sum = 0;
    int counter = 0;

    cout << "\nOdd numbers summation using Do While loop: ";
    do
    {
        counter++;
        if (CheckOddEven(counter) == enOddEven::Odd)
            Sum += counter;

    } while (counter < N);

    return Sum;
}

int main()
{
    int N = ReadNumber();

    cout << OddNumbersSummationUsingForLoop(N) << endl;
    cout << OddNumbersSummationUsingWhileLoop(N) << endl;
    cout << OddNumbersSummationUsingDoWhileLoop(N) << endl;

    return 0;
}