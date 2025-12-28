#include <iostream>
#include <cmath>
using namespace std;

struct stTaskDuration
{
    int Days, Hours, Minutes, Seconds;
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
    stTaskDuration TD;

    cout << "Enter number of days: "; cin >> TD.Days;
    cout << "Enter number of hours: "; cin >> TD.Hours;
    cout << "Enter number of Minutes: "; cin >> TD.Minutes;
    cout << "Enter number of seconds: "; cin >> TD.Seconds;

    return TD;
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