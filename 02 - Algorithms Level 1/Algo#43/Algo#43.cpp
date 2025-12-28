#include <iostream>
using namespace std;

struct stTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
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

stTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
    stTaskDuration TaskDuration;
    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondsPerHour = 60 * 60;
    const int SecondsPerMinute = 60;
    int Remainder = 0;

    TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
    Remainder = TotalSeconds % SecondsPerDay;
    TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
    Remainder = Remainder % SecondsPerHour;
    TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
    Remainder = Remainder % SecondsPerMinute;
    TaskDuration.NumberOfSeconds = Remainder;

    return TaskDuration;
}

void PrintTaskDurationDetails(stTaskDuration TaskDuration)
{
    cout << TaskDuration.NumberOfDays << ":" << TaskDuration.NumberOfHours << ":" << TaskDuration.NumberOfMinutes << ":" << TaskDuration.NumberOfSeconds;
}

int main()
{
    int TotalSeconds = ReadPositiveNumber("Enter Total Seconds: ");
    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));

    return 0;
}