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

void PrintLetterPattern(int Number)
{
    Number += 65;

    cout << endl;

    for (int i = 65; i <= Number - 1; i++)
    {
        for (int j = i; j >= 65; j--)
        {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{
    PrintLetterPattern(ReadPositiveNumber("Enter a Positive Number: "));

    return 0;
}