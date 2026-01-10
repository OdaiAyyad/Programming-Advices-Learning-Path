#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

enPrimNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);

    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return enPrimNotPrime::NotPrime;
    }
    return enPrimNotPrime::Prime;
}

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message; cin >> Number;

    } while (Number <= 0);

    return Number;
}

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;

    return RandNum;
}

void FillArrayWithRandomNumbers(int arr[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void CopyOnlyPrimeNumbers(int SourceArr[100], int DestinationArr[100], int ArrayLength, int& ArrayDestinationLength)
{
    int Counter = 0;

    for (int i = 0; i < ArrayLength; i++)
    {
        if (CheckPrime(SourceArr[i]) == enPrimNotPrime::Prime)
        {
            DestinationArr[Counter] = SourceArr[i];
            Counter++;
        }
    }
    ArrayDestinationLength = --Counter;
}

void PrintArray(int arr[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], ArrayLength = ReadPositiveNumber("Enter a Number: ");

    FillArrayWithRandomNumbers(arr, ArrayLength);

    int ArrDestination[100], ArrayDestinationLength = 0;

    CopyOnlyPrimeNumbers(arr, ArrDestination, ArrayLength, ArrayDestinationLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, ArrayLength);

    cout << "\nArray 2 Prime Numbers: ";
    PrintArray(ArrDestination, ArrayDestinationLength);

    return 0;
}