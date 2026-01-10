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

void Swap(int& A, int& B)
{
    int Temp;

    Temp = A;
    A = B;
    B = Temp;
}

void FillArrayWith1ToN(int arr[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        arr[i] = i + 1;
    }
}

void ShuffleArray(int arr[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        Swap(arr[RandomNumber(1, ArrayLength) - 1], arr[RandomNumber(1, ArrayLength) - 1]);
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

    int arr[100], ArrayLength(ReadPositiveNumber("Enter a Number: "));

    FillArrayWith1ToN(arr, ArrayLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, ArrayLength);

    ShuffleArray(arr, ArrayLength);

    cout << "\nArray Elements after shuffle: ";
    PrintArray(arr, ArrayLength);

    return 0;
}