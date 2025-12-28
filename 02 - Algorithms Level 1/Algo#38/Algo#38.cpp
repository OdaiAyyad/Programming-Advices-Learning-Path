#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrime_NotPrime { Prime = 1, NotPrime = 2 };

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message; cin >> Number;

    } while (Number < 0);
    

    return Number;
}

enPrime_NotPrime CheckPrime_NotPrime(int Number)
{
    int M = round(Number / 2);

    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return enPrime_NotPrime::NotPrime;
    }
    return enPrime_NotPrime::Prime;
}

void PrintResults(int Number)
{
    if (enPrime_NotPrime(Number) == enPrime_NotPrime::Prime)
        cout << "\nPrime Number.\n";
    else
        cout << "\nNot a Prime Number!!\n";
}

int main()
{
    PrintResults(CheckPrime_NotPrime(ReadPositiveNumber("Enter a positive number: ")));

    return 0;
}