#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber(string Message) 
{
    int Number;
    do
    {
        cout << Message; cin >> Number;

    } while (Number < 0);

    return Number;
}

void ReadArray(int arr[100], int& ArrayLength)
{
    cout << "Enter the number of elements: "; cin >> ArrayLength;

    cout << "\nEnter array elements: \n";
    for (int i = 1; i <= ArrayLength; i++)
    {
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }
    cout << endl;
}

void PrintArray(int arr[100], int ArrayLength)
{
    for (int i = 1; i <= ArrayLength; i++)
    {
        cout << arr[i] << " ";
    }
}

int TimesRepeated(int Number, int arr[100], int ArrayLength)
{
    int Counter = 0;

    for (int i = 0; i < ArrayLength; i++)
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

    NumberToCheck = ReadNumber("Enter the number you want to check: ");

    cout << "\nOriginal Array: ";
    PrintArray(arr, ArrayLength);

    cout << "\nNumber " << NumberToCheck << " is repeated " << TimesRepeated(NumberToCheck, arr, ArrayLength) << " time(s).\n";

    return 0;
}