#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber()
{
    int Number;
    cout << "Enter a number: "; cin >> Number;

    return Number;
}

enNumberType CeckNumberType(int Number)
{
    if (Number % 2 == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

void PrintNumber(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
        cout << "This is an Even Number\n";
    else
        cout << "This is an Odd Number\n";
}

int main()
{
    PrintNumber(CeckNumberType(ReadNumber()));

    return 0;
}