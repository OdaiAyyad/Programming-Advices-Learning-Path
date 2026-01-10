#include <iostream>
#include <string>
#include <cmath>
using namespace std;

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

void PrintArray(int arr[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void TwoArraysSummation(int arr1[100], int arr2[100], int arrSum[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        arrSum[i] = arr1[i] + arr2[i];
    }
}


int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], ArrayLength(ReadPositiveNumber("Enter a Number: "));

    FillArrayWithRandomNumbers(arr1, ArrayLength);

    cout << "\nArray 1 Elements: ";
    PrintArray(arr1, ArrayLength);

    int arr2[100];
    FillArrayWithRandomNumbers(arr2, ArrayLength);

    cout << "\nArray 2 Elements: ";
    PrintArray(arr2, ArrayLength);

    int arrSum[100];
    TwoArraysSummation(arr1, arr2, arrSum, ArrayLength);

    cout << "\nTwo Arrays Summation: ";
    PrintArray(arrSum, ArrayLength);

    return 0;
}