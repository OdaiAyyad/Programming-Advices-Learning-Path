#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
    int N;
    cout << "Enter a positive number: "; cin >> N;

    return N;
}

int FactorialUsingForLoop(short N)
{
    short Fact = 1;

    cout << "\nFactorial of " << N << " using For loop = ";
    for (int i = N; i >= 1; i--)
    {
        Fact *= i;
    }
    return Fact;
}

int FactorialUsingWhileLoop(short N)
{
    short Fact = 1;
    int i = N;

    cout << "\nFactorial of " << N << " using While loop = ";
    while (i > 1)
    {
        Fact *= i;
        i--;
    }
    return Fact;
}

int FactorialUsingDoWhileLoop(short N)
{
    short Fact = 1;
    int i = N;

    cout << "\nFactorial of " << N << " using Do While loop = ";
    do
    {
        Fact *= i;
        i--;
    } while (i > 1);

    return Fact;
}

int main()
{
    int N = ReadNumber();

    cout << FactorialForLoop(Num1) << endl << endl;
    cout << FactorialForLoop(Num2) << endl << endl;

    return 0;
}