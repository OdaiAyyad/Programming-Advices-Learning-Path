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
    if (N % 2 == 0)
        return enOddEven::Even;
    else
        return enOddEven::Odd;
}

int EvenNumbersSummationUsingForLoop(int N)
{
    short Sum = 0;

    cout << "\nEven numbers summation using For loop: ";
    for (int i = 1; i <= N; i++)
    {
        if (CheckOddEven(i) == enOddEven::Even)
            Sum += i;
    }
    return Sum;
}

int EvenNumbersSummationUsingWhileLoop(int N)
{
    short Sum = 0;
    int counter = 0;

    while (counter <= N)
    {
        counter++;
        Sum += counter;
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