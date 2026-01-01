#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrime_NotPrime { Prime = 1, Not_Prime = 2 };

short ReadNumber(string Message)
{
    short Number;
    do
    {
        cout << Message; cin >> Number;

    } while (Number < 0);

    return Number;
}

enPrime_NotPrime CheckPrime(short Number)
{
    short M = round(Number / 2);

    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return enPrime_NotPrime::Not_Prime;
        else
            return enPrime_NotPrime::Prime;
    }
}

void PrintPrimeNumbers(short Number)
{
    if (CheckPrime(Number) == enPrime_NotPrime::Prime)
        cout << Number << endl;
}

int main()
{
    PrintPrimeNumbers(CheckPrime(ReadNumber("Enter a Number: ")));

    return 0;
}