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

int FactorialForLoop(short Num)
{
    short Fact = 1;

    for (int i = Num; i >= 1; i--)
    {
        Fact *= i;
    }
    return Fact;
}

int FactorialWhileLoop(short Num)
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

int main()
{
    short Num1, Num2;

    cout << "Enter a positive number: "; cin >> Num1;
    cout << "\nFactorial of " << Num1 << " = " << FactorialForLoop(Num1) << endl << endl;

    cout << "Enter a positive number: "; cin >> Num2;
    cout << "\nFactorial of " << Num2 << " = " << FactorialForLoop(Num2) << endl << endl;

    return 0;
}