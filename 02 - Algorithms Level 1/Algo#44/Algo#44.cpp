#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadDay(short& Day)
{
    cout << "Enter the day number: "; cin >> Day;
}

string DayText(short Day)
{
    if (Day == 1)
    {
        return "Sunday";
    }
    else if (Day == 2)
    {
        return "Monday";
    }
    else if (Day == 3)
    {
        return "Tuesday";
    }
    else if (Day == 4)
    {
        return "Wednesday";
    }
    else if (Day == 5)
    {
        return "Thursday";
    }
    else if (Day == 6)
    {
        return "Friday";
    }
    else if (Day == 7)
    {
        return "Satarday";
    }
}

int main()
{
    short Day;

    ReadDay(Day);

    cout << DayText(Day);

    return 0;
}