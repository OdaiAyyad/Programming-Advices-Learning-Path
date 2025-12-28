#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };

short ReadNumberInRange(string Message, short From, short To)
{
    short Number = 0;
    do
    {
        cout << Message; cin >> Number;

    } while (Number < From || Number > To);

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
    case enDayOfWeek::Sat:
        return "Satarday";
    case enDayOfWeek::Sun:
        return "Sunday";
    case enDayOfWeek::Mon:
        return "Monday";
    case enDayOfWeek::Tue:
        return "Tuesday";
    case enDayOfWeek::Wed:
        return "Wednesday";
    case enDayOfWeek::Thu:
        return "Thursday";
    case enDayOfWeek::Fri:
        return "Friday";
    default:
        return "Not a Valid Day!";
    }   
}

int main()
{
    cout << GetDayOfWeek(ReadDayOfWeek());

    return 0;
}