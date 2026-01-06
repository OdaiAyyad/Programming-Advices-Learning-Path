#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message; cin >> Number;

    } while (Number <= 0);

    return Number;
}

void ReadArray(int arr[100], int& ArrayLength)
{
    cout << "Enter number of elements: "; cin >> ArrayLength;

    cout << "\nEnter array elements: \n";
    for (int i = 0; i < ArrayLength; i++)
    {
        cout << "Element [" << i + 1 << "]: ";
        cin >> arr[i];
    }
    cout << endl;
}

void PrintArray(int arr[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int TimesRepeated(int Number, int arr[100], int ArrayLength)
{
    int Counter = 0;

    for (int i = 0; i <= ArrayLength - 1; i++)
    {
        if (arr[i] == Number)
            Counter++;
    }
    return Counter;
}

int main()
{
    int arr[100], ArrayLength, NumberToCheck;

    ReadArray(arr, ArrayLength);

    NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");

    cout << "\nOriginal Array: "; 
    PrintArray(arr, ArrayLength);

    cout << "\nNumber " << NumberToCheck << " is repeated " << TimesRepeated(NumberToCheck, arr, ArrayLength) << " time(s).\n";

    return 0;
}