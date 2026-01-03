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

    } while (Number < 0);

    return Number;
}

void PrintInvertedLetterPattern(int Number)
{
    Number += 65;

    cout << endl;

    for (int i = Number - 1; i >= 65; i--)
    {
        for (int j = 65; j <= i - 1; j++)
        {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{
    PrintInvertedLetterPattern(ReadPositiveNumber("Enter a Positive Number: "));

    return 0;
}