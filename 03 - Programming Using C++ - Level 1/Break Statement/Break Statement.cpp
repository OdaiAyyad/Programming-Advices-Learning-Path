#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// We use this (break statement) to end the loop at a specific condition 

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        // Condition to break
        if (i == 3)
        {
            break;
        }
        cout << i << endl;
    }

    return 0;
}