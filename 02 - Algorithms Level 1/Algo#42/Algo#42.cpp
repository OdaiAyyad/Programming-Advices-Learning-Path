#include <iostream>
#include <cmath>
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

stTaskDuration ReadTaskDuration()
{
    stTaskDuration TaskDuration;

    TaskDuration.NumberOfDays = ReadPositiveNumber("Enter number of days: ");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Enter number of hours: ");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Enter number of Minutes: ");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Enter number of seconds: ");

    return TaskDuration;
}

int TotalTaskDurationInSeconds(int Days, int Hours, int Minutes, int Seconds)
{
    int TotalSeconds;

    Minutes = Minutes * 60;
    Hours = Hours * 60 * 60;
    Days = Days * 60 * 60 * 24;
    TotalSeconds = Days + Hours + Minutes + Seconds;

    return TotalSeconds;
}

int main()
{
    cout << "Total Task Duration in Seconds = " << TotalTaskDurationInSeconds(ReadTaskDuration()) << endl;

    return 0;
}