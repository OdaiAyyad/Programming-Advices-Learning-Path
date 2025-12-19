#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    // Multiplication Table
    for (int i = 1; i <= 12; i++)
    {
        cout << "i = " << i << ": \n";
        for (int j = 1; j <= 12; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << "--------------\n";
    }

    cout << "\n\n";

    // Stars Triangle
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}