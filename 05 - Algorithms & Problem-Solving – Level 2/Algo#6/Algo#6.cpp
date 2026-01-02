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

int DigitsSummation(int Number)
{
    int Remainder = 0, Sum = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Sum += Remainder;
    }
    return Sum;
}

void PrintSummation(int Sum)
{
    cout << "\nSum of Digits = " << Sum << endl;
}

int main()
{
    PrintSummation(DigitsSummation(ReadPositiveNumber("Enter a Positive Number: ")));

    return 0;
}