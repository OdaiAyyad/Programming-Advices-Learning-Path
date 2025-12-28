#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadGrade(short& Grade)
{
    cout << "Enter your grade: "; cin >> Grade;
}

char GetGradeLetter(short Grade)
{
    if (Grade >= 90 && Grade <= 100)
        return 'A';
    else if (Grade >= 80)
        return 'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
    else
        return 'F';
}

int main()
{
    short Grade;

    ReadGrade(Grade);
    GradeRank(Grade);

    return 0;
}