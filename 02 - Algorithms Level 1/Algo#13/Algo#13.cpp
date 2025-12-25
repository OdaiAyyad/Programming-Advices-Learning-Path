#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
    cout << "Enter the first number: "; cin >> Num1;
    cout << "Enter the second number: "; cin >> Num2;
    cout << "Enter the third number: "; cin >> Num3;
}

int MaxOfThreeNumbers(int Num1, int Num2, int Num3)
{
    int Max = 0;

    if (Num1 > Num2)
        if (Num1 > Num3)
            Max = Num1;
        else
            Max = Num3;
    else
        if (Num2 > Num3)
            Max = Num2;
        else
            Max = Num3;

    return Max;
}

void PrintResults(int Max)
{
    cout << "\nThe max number is: " << Max << endl;
}

int main()
{
    int Num1, Num2, Num3;

    ReadNumbers(Num1, Num2, Num3);
    PrintResults(MaxOfThreeNumbers(Num1, Num2, Num3));

    return 0;
}