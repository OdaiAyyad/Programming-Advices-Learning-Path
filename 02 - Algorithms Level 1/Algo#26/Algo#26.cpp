#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void PrintNumbersForLoop(short Num)
{
    for (int i = 1; i <= Num; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    short Num1, Num2;

    cout << "Enter a number: "; cin >> Num1;
    PrintNumbersForLoop(Num1);

    return 0;
}