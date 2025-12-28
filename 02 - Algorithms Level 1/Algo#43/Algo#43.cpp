#include <iostream>
using namespace std;

struct stTaskDuration
{

};

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message; cin >> Number;

    } while (Number < 0);

    return Number;
}

void TotalSecondsFun(int TotalSeconds)
{
    int SecondsPerMinute = 60;
    int SecondsPerHour = 60 * 60;
    int SecondsPerDay = 60 * 60 * 24;
    int Remainder;

    int NumberOfDays = floor(TotalSeconds / SecondsPerDay);
    Remainder = TotalSeconds % SecondsPerDay;
    int NumberOfHours = floor(Remainder / SecondsPerHour);
    Remainder = Remainder % SecondsPerHour;
    int NumberOfMinutes = floor(Remainder / SecondsPerMinute);
    Remainder = Remainder % SecondsPerMinute;
    int NumberOfSeconds = Remainder;

    cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconds;
}

int main()
{
    int TotalSeconds = ReadPositiveNumber("Enter Total Seconds: ");

    cout << "Enter your task total time duration in seconds: "; cin >> TotalSeconds
    TotalSecondsFun(TotalSeconds);

    return 0;
}