#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number;
    do
    {
        cout << Message; cin >> Number;
    
    } while (Number < 0);

    return Number;
}

float HoursToDays(float NumberOfHours)
{
    return NumberOfHours * 24;
}

float HoursToWeeks(float NumbersOfHours)
{
    return NumbersOfHours * 24 * 7;
}

float DaysToWeeks(float NumberOfDays)
{
    return NumberOfDays * 7;
}

int main()
{
    float NumberOfHours = ReadPositiveNumber("Enter the number of hours: ");

    return 0;
}