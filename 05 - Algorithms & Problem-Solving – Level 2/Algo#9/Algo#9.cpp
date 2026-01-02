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

void PrintAllDigitsFrequency(int Number)
{
    for (int i = 0; i < 10; i++)
    {
        short Digit_Frequency = 0;
        Digit_Frequency = DigitFrequency(Number, i);

        if (Digit_Frequency > 0)
        {
            cout << "\nDigit " << i << " Frequency is " << Digit_Frequency << " Time(s).";
        }
    }
    cout << endl;
}

int main()
{
    int Number = ReadPositiveNumber("Enter a Positive Number: ");
    PrintAllDigitsFrequency(Number);

    return 0;
}