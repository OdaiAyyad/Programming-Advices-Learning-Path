#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message; cin >> Number;

    } while (Number < 0);

    return Number;
}

int ReverseNumber(int Number)
{
    int Remainder = 0, Number2 = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Remainder;
    }
    return Number2;
}

bool IsPalindromeNumber(int Number)
{
    return(ReverseNumber(Number) == Number);
}

int main()
{
    if (IsPalindromeNumber(ReadPositiveNumber("Enter a Positive Number: ")))
        cout << "\nYES, it is a Palinrome Number!\n";
    else
        cout << "\nNO, it is NOT a Palinrome Number!\n";

    return 0;
}