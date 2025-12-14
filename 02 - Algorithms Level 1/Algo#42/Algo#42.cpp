#include <iostream>
#include <cmath>
using namespace std;

int TotalSeconds(int Days, int Hours, int Minutes, int Seconds)
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
    int Days, Hours, Minutes, Seconds;

    cout << "Enter number of days: "; cin >> Days;
    cout << "Enter number of hours: "; cin >> Hours;
    cout << "Enter number of Minutes: "; cin >> Minutes;
    cout << "Enter number of seconds: "; cin >> Seconds;

    cout << "Your task total time duration in seconds = " << round(TotalSeconds(Days, Hours, Minutes, Seconds)) << endl;

    return 0;
}