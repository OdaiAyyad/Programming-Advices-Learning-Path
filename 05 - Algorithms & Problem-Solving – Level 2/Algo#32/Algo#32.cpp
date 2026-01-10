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

void CopyArrayInReverseOrder(int arr1[100], int arr2[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        arr2[i] = arr1[ArrayLength - 1 - i];
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

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], ArrayLength(ReadPositiveNumber("Enter a Number: "));

    FillArrayWithRandomNumbers(arr1, ArrayLength);

    cout << "\nArray 1 Elements: ";
    PrintArray(arr1, ArrayLength);

    int arr2[100];
    CopyArrayInReverseOrder(arr1, arr2, ArrayLength);

    cout << "\nArray 2 Elements after Reverse Copy: ";
    PrintArray(arr2, ArrayLength);

    return 0;
}