#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int Days, Hours, Minutes, Seconds, TotalSeconds;

    cout << "Enter number of days: "; cin >> Days;
    cout << "Enter number of hours: "; cin >> Hours;
    cout << "Enter number of Minutes: "; cin >> Minutes;
    cout << "Enter number of seconds: "; cin >> Seconds;

    Minutes = Minutes * 60;
    Hours = Hours * 60 * 60;
    Days = Days * 60 * 60 * 24;
    TotalSeconds = Days + Hours + Minutes + Seconds;

    cout << "Your task total time duration in seconds = " << round(TotalSeconds) << endl;

    return 0;
}