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
    }
    return enPrime_NotPrime::Prime;
}

void PrintPrimeNumbers(short Number)
{
    cout << "\nPrime Numbers from 1 " << "to " << Number << ": \n";

    for (int i = 1; i <= Number; i++)
    {
        if (CheckPrime(i) == enPrime_NotPrime::Prime)
            cout << i << endl;
    }
}

int main()
{
    PrintPrimeNumbers(ReadNumber("Enter a Number: "));

    return 0;
}