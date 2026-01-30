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

int FindNumberPosition(int arr[100], int ArrayLength, int Number)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        if (arr[i] == Number)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], ArrayLength(ReadPositiveNumber("Enter a Number: ")), NumberToSearch;

    FillArrayWithRandomNumbers(arr, ArrayLength);

    cout << "\nArray Elements: \n";
    PrintArray(arr, ArrayLength);

    NumberToSearch = ReadPositiveNumber("\nEnter a number to search for: ");
    cout << "\nNumber you are looking for is: " << NumberToSearch << endl;

    short NumberPosition = FindNumberPosition(arr, ArrayLength, NumberToSearch);
    if (NumberPosition == -1)
    {
        cout << "No, the number is not found :-(\n";
    }
    else
    {
        cout << "Yes, the number found :-)\n";
    }

    return 0;
}