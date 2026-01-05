#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int RandomNumber(int From, int To)
{
    // Function to generate a random number
    int RandNum = rand() % (To - From + 1) + From;

    return RandNum;
}

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SmallLetter:
        return RandomNumber(char(97), char(122));
    case enCharType::CapitalLetter:
        return char(RandomNumber(65, 90));

    }
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand(unsigned(time(NULL)));

    cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;

    return 0;
}