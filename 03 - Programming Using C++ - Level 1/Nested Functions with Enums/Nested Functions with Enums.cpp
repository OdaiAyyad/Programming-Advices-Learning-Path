#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enWeekDay { Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7 };

void WeekDayMenu()
{
    cout << "*************************\n";
    cout << "\tWeek Days\n";
    cout << "*************************\n";
    cout << "1: Sunday\n";
    cout << "2: Monday\n";
    cout << "3: Tuesday\n";
    cout << "4: Wednesday\n";
    cout << "5: Thursday\n";
    cout << "6: Friday\n";
    cout << "7: Satarday\n";
    cout << "*************************\n";
    cout << "Enter the number of day you want: ";
}

enWeekDay ReadWeekDay()
{
    enWeekDay WeekDay;

    short  WD;
    cin >> WD;

    return enWeekDay(WD);
}

string GetWeekDayName(enWeekDay WeekDay)
{
    switch (WeekDay)
    {
    case enWeekDay::Sun:
        return "Sunday";
        break;
    case enWeekDay::Mon:
        return "Monday";
        break;
    case enWeekDay::Tue:
        return "Tuesday";
        break;
    case enWeekDay::Wed:
        return "Wednesday";
        break;
    case enWeekDay::Thu:
        return "Thursday";
        break;
    case enWeekDay::Fri:
        return "Friday";
        break;
    case enWeekDay::Sat:
        return "Satarday";
        break;
    default:
        return "Not a Day!";
    }
}

int main()
{
    WeekDayMenu();

    cout << "Today is: " << GetWeekDayName(ReadWeekDay()) << endl;

    return 0;
}