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

short DigitFrequency(int Number, short Digit)
{
    short Counter = 0, Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        if (Remainder == Digit)
        {
            Counter++;
        }
    }
    return Counter;
}

int main()
{
    int Number = ReadPositiveNumber("Enter a Positive Number: ");
    short Digit = ReadPositiveNumber("Enter a Digit: ");

    cout << "\nDigit " << Digit << " Frequency is " << DigitFrequency(Number, Digit) << " Time(s).\n";


    return 0;
}