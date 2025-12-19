#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    for (int i = 1; i <= 12; i++)
    {
        for (int j = 1; j <= 12; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
    }
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";

    return 0;
}