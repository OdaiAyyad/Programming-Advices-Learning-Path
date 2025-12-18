#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    short Num, Sum = 0;

    cout << "Enter a number: "; cin >> Num;

        for (int i = 1; i <= Num; i++)
        {
            if (Num % 2 != 0)
            {
                Sum += Num;
            }
        }
        cout << Sum;

    return 0;
}