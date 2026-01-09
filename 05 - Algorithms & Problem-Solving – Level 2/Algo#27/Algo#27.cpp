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

int ArrayNumbersSummation(int arr[100], int ArrayLength)
{
    int Sum = 0;

    for (int i = 0; i < ArrayLength; i++)
    {
        Sum += arr[i];
    }
    return Sum;
}

int ArrayNumbersAverage(int arr[100], int ArrayLength)
{
    return float(ArrayNumbersSummation(arr, ArrayLength) / ArrayLength);
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], ArrayLength(ReadPositiveNumber("Enter a Number: "));

    FillArrayWithRandomNumbers(arr, ArrayLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, ArrayLength);

    cout << "\nArray Numbers Average: " << ArrayNumbersAverage(arr, ArrayLength) << endl;

}
