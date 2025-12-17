#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadInfo(float &Num1, float &Num2, char &Operation)
{
    cout << "Enter the first number: "; cin >> Num1;
    cout << "Enter the second number: "; cin >> Num2;
    cout << "Enter the operation you want: "; cin >> Operation;
}

float Calculator(float Num1, float Num2, char Operation)
{
    if (Operation == '+')
    {
        return Num1 + Num2;
    }
    else if (Operation == '-')
    {
        return Num1 - Num2;
    }
    else if (Operation == '*')
    {
        return Num1 * Num2;
    }
    else if (Operation == '/')
    {
        return Num1 / Num2;
    }
}

int main()
{
    float Num1, Num2;
    char Operation;

    ReadInfo(Num1, Num2, Operation);

    cout << Calculator(Num1, Num2, Operation) << endl;

    return 0;
}