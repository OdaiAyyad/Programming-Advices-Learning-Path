#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Any function with (void) data type, doesn't return any value
// // Any function with (void) data type, we called it a (Procedure)

void MyFunction()
{
    cout << "This is my first function, it got executed :-)\n";
}

string MyFunction2()
{
    return "This is my first returning value function, this is the value.\n";
}

int MyFunction3()
{
    int x = 10;
    int y = 20;

    return x * y;
}

int main()
{
    MyFunction();
    cout << MyFunction2() << endl;
    cout << MyFunction3() << endl;

    return 0;
}