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

void PrintInvertedNumberPattern(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    PrintInvertedNumberPattern(ReadPositiveNumber("Enter a Positive Number: "));

    return 0;
}