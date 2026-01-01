#include <iostream>
#include <string>
#include <cmath>
using namespace std;

short ReadPositiveNumber(string Message)
{
    short Number;
    do
    {
        cout << Message; cin >> Number;

    } while (Number < 0);

    return Number;
}

bool IsPerfectNumber(short Number)
{
    short Sum = 0;

    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
            Sum += i;
    }
    return(Sum == Number);
}

void PrintPerfectNumbers(short Number)
{
    for (int i = 1; i < Number; i++)
    {
        if (IsPerfectNumber(i))
            cout << "\n" << i << endl;
    }
}

int main()
{
    PrintPerfectNumbers(ReadPositiveNumber("Enter a Positive Number: "));

    return 0;
}