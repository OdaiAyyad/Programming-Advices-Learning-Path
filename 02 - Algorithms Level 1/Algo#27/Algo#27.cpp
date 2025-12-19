#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void PrintNumbersForLoop(short Num)
{
    for (int i = Num; i >= 1; i--)
    {
        cout << i << endl;
    }
}

void PrintNumbersWhileLoop(short Num)
{
    int i = Num;
    while (i >= 1)
    {
        cout << i << endl;
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