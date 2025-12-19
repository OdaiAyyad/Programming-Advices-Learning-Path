#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*This (do while) loop is the same as the normal while loop, 
but in this loop the body executed at least one time before checking the loop body*/

int main()
{
    int i = 6;
    do
    {
        cout << "Odai\n";
        i++;
    } while (i <= 5);

    return 0;
}