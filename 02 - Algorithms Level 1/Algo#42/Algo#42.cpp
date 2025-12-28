#include <iostream>
#include <cmath>
using namespace std;

struct stTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message; cin >> Number;

    } while (Number <= 0);

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

int TotalTaskDurationInSeconds(stTaskDuration TaskDuration)
{
    int DurationInSeconds = 0;

    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;

    return DurationInSeconds;
}

int main()
{
    cout << "\nTotal Task Duration in Seconds = " << TotalTaskDurationInSeconds(ReadTaskDuration()) << endl;

    return 0;
}