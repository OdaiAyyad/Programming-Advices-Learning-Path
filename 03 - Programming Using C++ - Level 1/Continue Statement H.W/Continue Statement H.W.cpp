#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int Num, Sum = 0;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter a number: "; cin >> Num;
        if (Num >= 50)
        {
            continue;
        }
        Sum += Num;
    }
    cout << "Total = " << Sum << endl;

    return 0;
}