#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
    int Num;
    cout << "Enter a number: "; cin >> Num;

    return Num;
}

void PrintNumbersForLoop(short Num)
{
    for (int i = 1; i <= Num; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    PrintNumbersForLoop(ReadNumber());

    return 0;
}