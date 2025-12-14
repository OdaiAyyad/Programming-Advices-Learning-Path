#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int x = 250; // This is a global variable for the whole program

void MyFunction1()
{
    int x = 500; // This is a local variable, and its scope inside this function only

    cout << "The value of \'x\' inside this function is: " << x << endl;
}

int main()
{
    int x = 100; // This is a local variable, and its scope inside this main function only

    cout << "The local value of \'x\' inside this Main function is: " << x << endl;
    MyFunction1();


    // To access the global variable, we use this: (::variable):
    cout << "The global value of \'x\' is: " << ::x << endl;

    return 0;
}