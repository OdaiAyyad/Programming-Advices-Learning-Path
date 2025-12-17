#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadMonth(short& Month)
{
    cout << "Enter the month number: "; cin >> Month;
}

string MonthText(short Month)
{
    switch (Month)
    {
    case 1:
        return "January";
        break;
    case 2:
        return "February";
        break;
    case 3:
        return "March";
        break;
    case 4:
        return "April";
        break;
    case 5:
        return "May";
        break;
    case 6:
        return "June";
        break;
    case 7:
        return "July";
        break;
    case 8:
        return "August";
        break;
    case 9:
        return "September";
    }
   
    else if (Month == 10)
    {
        return "October";
    }
    else if (Month == 11)
    {
        return "November";
    }
    else if (Month == 12)
    {
        return "December";
    }
}

int main()
{
    short Day;

    ReadMonth(Day);

    cout << MonthText(Day) << endl;

    return 0;
}