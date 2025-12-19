#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*This (do while) loop is the same as the normal while loop, 
but in this loop the body executed at least one time before checking the loop body*/

int ReadNumberInRange(int From, int To)
{
    int Number;

    do
    {
        cout << "Enter a number between " << From << " and " << To << ": "; cin >> Number;
    } while (Number < From || Number > To);

    return Number;
}

int main()
{
    int i = 6;
    do
    {
        cout << "Odai\n";
        i++;
    } while (i <= 5);

    cout << "\nThe Number is: " << ReadNumberInRange(18, 45) << endl;

    return 0;
}