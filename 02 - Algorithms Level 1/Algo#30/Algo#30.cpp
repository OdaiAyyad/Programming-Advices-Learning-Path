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

    while (i >= 1)
    {
        Fact *= i;
        i--;
    }
    return Fact;
}

int FactorialUsingDoWhileLoop(short N)
{

}

int main()
{
    int N = ReadNumber();

    cout << "\nFactorial of " << Num1 << " = " << FactorialForLoop(Num1) << endl << endl;
    cout << "\nFactorial of " << Num2 << " = " << FactorialForLoop(Num2) << endl << endl;

    return 0;
}