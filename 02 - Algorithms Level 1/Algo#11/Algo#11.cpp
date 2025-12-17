#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadMarks(float Marks[3])
{
    cout << "Enter the first mark: "; cin >> Marks[0];
    cout << "Enter the second mark: "; cin >> Marks[1];
    cout << "Enter the third mark: "; cin >> Marks[2];
}

float AverageCalculator(float Marks[3])
{
    return (Marks[0] + Marks[1] + Marks[2]) / 3;
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