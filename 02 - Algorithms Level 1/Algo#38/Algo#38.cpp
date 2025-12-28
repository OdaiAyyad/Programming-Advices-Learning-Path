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
    for (int i = 2; i <= Number; i++)
    {
        if (Number % i == 0)
            return enPrime_NotPrime::NotPrime;
        else
            return enPrime_NotPrime::Prime;
    }
}

void PrintResults(enPrime_NotPrime P)
{
    if (enPrime_NotPrime(P) == enPrime_NotPrime::Prime)
        cout << "\nPrime Number.\n";
    else
        cout << "\nNot a Prime Number!!\n";
}

int main()
{
    PrintResults(CheckPrime_NotPrime(ReadPositiveNumber("Enter a positive number: ")));

    return 0;
}