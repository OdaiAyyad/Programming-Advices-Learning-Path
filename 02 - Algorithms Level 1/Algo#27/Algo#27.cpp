#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void PrintNumbers(short Num)
{
    for (int i = Num; i >= 1; i--)
    {
        cout << i << endl;
    }
}

int main()
{
    short Num;

    cout << "Enter a number: "; cin >> Num;

    PrintNumbers(Num);

    return 0;
}