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

void CopyArray(int SourceArr[100], int DestinationArr[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        DestinationArr[i] = SourceArr[i];
        cout << DestinationArr[i] << " ";
    }
    cout << "\n";
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100], ArrayLength(ReadPositiveNumber("Enter a Number: "));

    FillArrayWithRandomNumbers(arr, ArrayLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, ArrayLength);

    int ArrDestination[100];
    cout << "\nArray Elements after copy: ";
    CopyArray(arr, ArrDestination, ArrayLength);

}