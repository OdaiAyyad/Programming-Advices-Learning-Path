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

int FactorialUsingForLoop(short Num)
{
    short Fact = 1;

    for (int i = Num; i >= 1; i--)
    {
        Fact *= i;
    }
    return Fact;
}

int FactorialUsingWhileLoop(short Num)
{
    short Fact = 1;
    int i = Num;

    while (i >= 1)
    {
        Fact *= i;
        i--;
    }
    return Fact;
}

int FactorialWhileLoop

int main()
{
    int N = ReadNumber();

    cout << "\nFactorial of " << Num1 << " = " << FactorialForLoop(Num1) << endl << endl;
    cout << "\nFactorial of " << Num2 << " = " << FactorialForLoop(Num2) << endl << endl;

    return 0;
}