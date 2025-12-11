#include <iostream>
using namespace std;

int main()
{
    int Days, Hours, Minutes, Seconds, TotalSeconds;

    cout << "Enter number of days: "; cin >> Days;
    cout << "Enter number of hours: "; cin >> Hours;
    cout << "Enter number of Minutes: "; cin >> Minutes;
    cout << "Enter number of seconds: "; cin >> Seconds;

    Minutes = Minutes * 60;
    Hours = Minutes * 60;
    Days = Hours * 24;
    TotalSeconds = Days;

    cout << "Your task total time duration in seconds = " << TotalSeconds << endl;

    return 0;
}