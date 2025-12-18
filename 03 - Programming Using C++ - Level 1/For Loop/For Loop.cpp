#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    // 1 - 10
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    cout << endl;

    // 10 - 1
    for (int i = 10; i >= 1; i--)
    {
        cout << i << endl;
    }

    cout << endl;

    // Step 2 (Odd Numbers)
    for (int i = 1; i <= 10; i+=2)
    {
        cout << i << endl;
    }

    cout << endl;

    // Step 2 (Even Numbers)
    for (int i = 0; i <= 10; i += 2)
    {
        cout << i << endl;
    }

    return 0;
}