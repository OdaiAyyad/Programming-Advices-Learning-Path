#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadGrades(float Grades[3])
{
    cout << "Enter the first grade: "; cin >> Grades[0];
    cout << "Enter the second grade: "; cin >> Grades[1];
    cout << "Enter the third grade: "; cin >> Grades[2];
}

float AverageCalculation(float Grades[3])
{
    float AVG;
    AVG = (Grades[0] + Grades[1] + Grades[2]) / 3;

    return AVG;
}

int main()
{
    float Grades[3];

    ReadGrades(Grades);

    return 0;
}