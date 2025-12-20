#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enNumberType { Odd = 1, Even = 0};

int ReadNumber()
{
    int Number;

    cout << "Enter a number: "; cin >> Number;

    return Number;
}

enNumberType CheckOddEven(int Number)
{
    if (Number % 2 == 0)
    {
        return enNumberType::Even;
    }
    else
    {
        return enNumberType::Odd;
    }
}

void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
        cout << "\nThe Number is Even!\n";
    else
        cout << "\nThe Number is Odd!\n";
}

int main()
{
    PrintNumberType(CheckOddEven(ReadNumber()));

    return 0;
}