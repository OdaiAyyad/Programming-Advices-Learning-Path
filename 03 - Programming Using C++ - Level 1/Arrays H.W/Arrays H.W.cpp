#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    float Grades[3];

    cout << "Enter the first grade: "; cin >> Grades[0];
    cout << "Enter the second grade: "; cin >> Grades[1];
    cout << "Enter the third grade: "; cin >> Grades[2];

    float Average = (Grades[0] + Grades[1] + Grades[2]) / 3;

    cout << "\n******************************\n";
    cout << "The average of grades = " << Average << endl;


    return 0;
}