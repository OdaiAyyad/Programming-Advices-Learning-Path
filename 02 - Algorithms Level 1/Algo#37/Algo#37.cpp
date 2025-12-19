#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int Num, Sum = 0;

    cout << "Enter a number: "; cin >> Num;

    while (Num != -99)
    {
        cout << "Enter a number: "; cin >> Num;
        Sum += Num;
    }
    cout << "Summation = " << Sum << endl;

    return 0;
}