#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void PrintNumbersForLoop()
{
    for (int i = 65; i <= 90; i++)
    {
        cout << char(i) << endl;
    }
}

void PrintNumbersWhileLoop()
{
    int i = 65;
    while (i <= 90)
    {
        cout << char(i) << endl;
        i++;
    }
}

int main()
{
    PrintNumbersForLoop();
    cout << "\n-----\n\n";
    PrintNumbersWhileLoop();

    return 0;
}