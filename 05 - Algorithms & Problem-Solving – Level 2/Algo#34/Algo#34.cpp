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

int main()
{
    srand((unsigned)time(NULL));

    string arr[100]; int ArrayLength(ReadPositiveNumber("Enter a Number: "));

    FillArrayWithRandomKeys(arr, ArrayLength);

    cout << "\nArray Elements: \n";
    PrintStringArray(arr, ArrayLength);

    return 0;
}