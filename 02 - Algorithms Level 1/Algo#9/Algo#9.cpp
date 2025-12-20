#include <iostream>
using namespace std;

struct stNumbers
{
    int num1, num2, num3;
};

stNumbers ReadNumbers()
{
    stNumbers Numbers;

    cout << "Enter the first number: "; cin >> Numbers.num1;
    cout << "Enter the second number: "; cin >> Numbers.num2;
    cout << "Enter the third number: "; cin >> Numbers.num3;

    return Numbers;
}

int CalculateSummation(stNumbers Numbers)
{
    return Numbers.num1 + Numbers.num2 + Numbers.num3;
}

void PrintResults(int Total)
{
    cout << "\nTotal = " << Total << endl;
}

int main()
{
    PrintResults(CalculateSummation(ReadNumbers()));

    return 0;
}