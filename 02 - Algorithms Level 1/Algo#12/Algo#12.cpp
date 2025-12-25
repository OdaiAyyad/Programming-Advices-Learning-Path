#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
    cout << "Enter the first number: "; cin >> Num1;
    cout << "Enter the second number: "; cin >> Num2;
}

int MaxOfTwoNumbers(int Num1, int Num2)
{
    int Max = 0;
    if (Num1 > Num2)
        Max = Num1;
    else
        Max = Num2;

    return Max;
}

void PrintResults(int Max)
{
    cout << "\nThe max number is: " << Max << endl;
}

int main()
{
    int Num1, Num2;

    ReadNumbers(Num1, Num2);
    PrintResults(MaxOfTwoNumbers(Num1, Num2));

    return 0;
}