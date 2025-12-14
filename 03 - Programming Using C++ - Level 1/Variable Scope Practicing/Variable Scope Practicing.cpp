#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void MyFunction1()
{
    int x = 500;

    cout << "The value of \'x\' inside this function is: " << x << endl;
}

int main()
{
    int x = 100;

    cout << "The local value of \'x\' inside this Main function is: " << x << endl;
    MyFunction1();

    return 0;
}