#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// We always use (while loops) when we (didn't know) the ranges of the task (from what to what)

int main()
{
    // Print form 1 to 5
    int i = 1;
    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }

    cout << "\n\n";

    // Check positive number
    int Number;

    cout << "Please, enter a positive number: "; cin >> Number;

    while (Number < 0)
    {
        cout << "Wrong number, please enter a positive number: "; cin >> Number;
    }
    cout << "\nThe number you entered is: " << Number << endl;

    return 0;
}