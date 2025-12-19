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
    cout << "\nFactorial of " << Num << " = " << Fact << endl;

    return 0;
}