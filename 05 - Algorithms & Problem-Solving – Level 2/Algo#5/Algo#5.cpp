#include <iostream>
#include <string>
#include <cmath>
using namespace std;

short ReadPositiveNumber(string Message)
{
    short Number = 0;
    do
    {
        cout << Message; cin >> Number;
    
    } while (Number < 0);

    return Number;
}

void PrintReversedDigits(short Number)
{
    short Remainder = 0;
    for (int i = 0; i < ((to_string(Number)).length() - 1); i++)
    {
        Remainder = Number % 10;
        cout << Remainder;
    }
}

int main()
{
    PrintReversedDigits(ReadPositiveNumber("Enter a Positive Number: "));

    return 0;
}