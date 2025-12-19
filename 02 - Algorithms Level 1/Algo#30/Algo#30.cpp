#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    short Num, Fact = 1;

    cout << "Enter a positive number: "; cin >> Num;

    for (int i = Num; i >= 1; i--)
    {
        Fact *= i;
    }
    cout << "\nFactorial " << Num << " = " << Fact;

    return 0;
}