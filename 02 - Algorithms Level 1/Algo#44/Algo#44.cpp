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
    switch (Day)
    {
    case 1:
        return "Sunday";
        break;
    case 2:
        return "Monday";
        break;
    case 3:
        return "Tuesday";
        break;
    case 4:
        return "Wednesday";
        break;
    case 5:
        return "Thursday";
        break;
    case 6:
        return "Friday";
        break;
    case 7:
        return "Satarday";
        break;
    default:
        return "Not a Day!";
    }   
}

int main()
{
    short Day;

    ReadDay(Day);

    cout << DayText(Day);

    return 0;
}