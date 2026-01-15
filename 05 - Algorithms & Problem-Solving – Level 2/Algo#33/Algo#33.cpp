#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

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

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SmallLetter:
        return char(RandomNumber(97, 122));

    case enCharType::CapitalLetter:
        return char(RandomNumber(65, 90));

    case enCharType::SpecialCharacter:
        return char(RandomNumber(33, 47));

    case enCharType::Digit:
        return char(RandomNumber(48, 57));
    }
}

string GenerateWord(enCharType CharType, short Length)
{
    string Word;

    for (int i = 1; i <= Length; i++)
    {
        Word = Word + GetRandomCharacter(CharType);
    }
    return Word;
}

string GenerateKey()
{
    string Key = "";

    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);

    return Key;
}

void GenerateKeys(short NumberOfKeys)
{
    cout << "\n";

    for (int i = 1; i <= NumberOfKeys; i++)
    {
        cout << "Key [" << i << "]: ";
        cout << GenerateKey() << endl;
    }
}

void FillArrayWithRandomKeys(string arr[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        arr[i] = GenerateKey();
    }
}

void PrintStringArray(string arr[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        cout << "Key [" << i << "]: ";
        cout << arr[i] << "\n";
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