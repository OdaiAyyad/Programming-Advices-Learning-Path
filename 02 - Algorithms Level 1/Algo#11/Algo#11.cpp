#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2};

void ReadMarks(float Marks[3])
{
    cout << "Enter the first mark: "; cin >> Marks[0];
    cout << "Enter the second mark: "; cin >> Marks[1];
    cout << "Enter the third mark: "; cin >> Marks[2];
}

int MarksSummation(float Marks[3])
{
    return Marks[0] + Marks[1] + Marks[2];
}

float AverageCalculator(float Marks[3])
{
    return float((MarksSummation(Marks) / 3));
}

enPassFail CheckAverage(float Average)
{
    if()
}

void PrintResults(float Average)
{
    cout << "\nAverage = " << Average << endl;

    if (CheckAverage(Average) == enPassFail::Pass)
        cout << "\nYou Passed!\n";
    else
        cout << "\nYou Failed!\n";
}

int main()
{
    float Marks[3];

    ReadMarks(Marks);

    float AVG = AverageCalculator(Marks);

    cout << "\nMarks Average = " << AVG << endl;
    
    if (AVG >= 50)
    {
        cout << "PASS!\n";
    }
    else
    {
        cout << "Fail.\n";
    }

    return 0;
}