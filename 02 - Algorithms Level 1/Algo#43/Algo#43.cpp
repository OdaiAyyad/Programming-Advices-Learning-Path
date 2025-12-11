#include <iostream>
using namespace std;

int main()
{
    int TotalSeconds, Remainder;

    cout << "Enter your task total time duration in seconds: "; cin >> TotalSeconds;

    int SecondsPerMinute = 60;
    int SecondsPerHour = 60 * 60;
    int SecondsPerDay = 60 * 60 * 24;

    int NumberOfDays = floor(TotalSeconds / SecondsPerDay);
    Remainder = TotalSeconds % SecondsPerDay;
    int NumberOfHours = floor(Remainder / SecondsPerHour);
    Remainder = Remainder % SecondsPerHour;
    int NumberOfMinutes = floor(Remainder / SecondsPerMinute);
    Remainder = Remainder % SecondsPerMinute;
    int NumberOfSeconds = Remainder;

    cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconds;

    return 0;
}