#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadGrade(short &Grade)
{
    cout << "Enter your grade: "; cin >> Grade;
}

void GradeRank(short Grade)
{
    if (Grade >= 90 && Grade <= 100)
    {
        cout << "A\n";
    }
    else if (Grade >= 80)
    {
        cout << "B\n";
    }
    else if (Grade >= 70)
    {
        cout << "C\n";
    }
    else if (Grade >= 60)
    {
        cout << "D\n";
    }
    else if (Grade >= 50)
    {
        cout << "E\n";
    }
    else
    {
        cout << "F\n";
    }
}

int main()
{
    short Grade;

    ReadGrade(Grade);
    GradeRank(Grade);

    return 0;
}