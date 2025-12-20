#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
    cout << "Enter the first number: "; cin >> Num1;
    cout << "Enter the second number: "; cin >> Num2;
    cout << "Enter the third number: "; cin >> Num3;
}

int CalculateSummation(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;
}

void PrintResults(int Total)
{
    cout << "\nTotal = " << Total << endl;
}

int main()
{
    int Num1, Num2, Num3;

    ReadNumbers(Num1, Num2, Num3);
    PrintResults(CalculateSummation(Num1, Num2, Num3));

    return 0;
}