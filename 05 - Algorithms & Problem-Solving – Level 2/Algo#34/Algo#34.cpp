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

void SearchNumberInArray(int arr[100], int ArrayLength, int Number)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        if (arr[i] == Number)
        {
            cout << "The number found at position: " << i << endl;
            cout << "The number order is: " << i + 1 << endl;
        }
        else
            cout << "The number is not found!\n";
    }
}



int main()
{
    srand((unsigned)time(NULL));

    int arr[100], ArrayLength(ReadPositiveNumber("Enter a Number: ")), NumberToSearch;

    FillArrayWithRandomNumbers(arr, ArrayLength);

    cout << "\nArray Elements: \n";
    PrintArray(arr, ArrayLength);

    NumberToSearch = ReadPositiveNumber("Enter a number to search for: ");

    cout << "Number you are looking for is: " << NumberToSearch << endl;
    
    SearchNumberInArray(arr, ArrayLength, NumberToSearch);

    return 0;
}