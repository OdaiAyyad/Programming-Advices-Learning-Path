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

void PrintNumbersWhileLoop(short Num)
{
    int i = 1;
    while (i <= Num)
    {
        cout << i << endl;
        i++;
    }
}

int main()
{
    short Num1, Num2;

    cout << "Enter a number: "; cin >> Num1;
    PrintNumbersForLoop(Num1);

    cout << "\n\n";

    cout << "Enter a number: "; cin >> Num2;
    PrintNumbersWhileLoop(Num2);

    return 0;
}