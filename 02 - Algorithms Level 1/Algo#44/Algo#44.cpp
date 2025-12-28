#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };

short ReadNumberInRange(string Message, short From, short To)
{
    short Number;
    do
    {
        cout << Message; cin >> Number;

    } while (Number < 1 || Number > 7);

    return Number;
}

enDayOfWeek ReadDayOfWeek()
{
    return enDayOfWeek(ReadNumberInRange("Enter a day number (Sat = 1...Fri = 7): ", 1, 7));
}

string GetDayOfWeek(enDayOfWeek Day)
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