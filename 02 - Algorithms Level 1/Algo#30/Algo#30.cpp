#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int Factorial(short Num)
{
    short Fact = 1;

    for (int i = Num; i >= 1; i--)
    {
        Fact *= i;
    }
    return Fact;
}

int main()
{
    short Num;

    cout << "Enter a positive number: "; cin >> Num;

    cout << "\nFactorial of " << Num << " = " << Factorial(Num) << endl;

    return 0;
}