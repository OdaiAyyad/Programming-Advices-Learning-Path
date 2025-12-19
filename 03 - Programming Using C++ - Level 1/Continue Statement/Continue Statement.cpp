#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/* Continue statement inside the loop make the compiler return back to the loop condition 
and doesn't execute the code after it (within the loop scope) */

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        // Condition to continue
        if (i == 3)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}