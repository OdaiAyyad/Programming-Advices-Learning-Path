#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPerfect_NotPerfect { Perfect = 1, Not_Perfect = 2 };

short ReadPositiveNumber(string Message)
{
    short Number;
    do
    {
        cout << Message; cin >> Number;

    } while (Number < 0);

    return Number;
}

enPerfect_NotPerfect CheckPerfectNumber(short Number)
{
    short M = round(Number / 2);
    short Sum = 0;

    for (int i = 1; i <= M; i++)
    {
        if (Number % i == 0)
            Sum += i;
    }
    if (Sum == Number)
        return enPerfect_NotPerfect::Perfect;
    else
        return enPerfect_NotPerfect::Not_Perfect;
}

void PrintResults(short Number)
{
    if (CheckPerfectNumber(Number) == enPerfect_NotPerfect::Perfect)
        cout << "\n" << Number << " is a Perfect Number!\n";
    else
        cout << "\n" << Number << " is not a Perfect Number.\n";
}

int main()
{
    PrintResults(ReadPositiveNumber("Enter a Positive Number: "));

    return 0;
}