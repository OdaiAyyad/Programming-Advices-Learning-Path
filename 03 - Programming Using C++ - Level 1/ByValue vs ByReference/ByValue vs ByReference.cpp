#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ByValueFun(int num1)
{
    /*This considered as a (By Value) function, and because of that when we called it
    in the main function it didn't changed the (num1) value to 7000 and it remains 1000,
    because (By Value) functions take a copy of the value and apply changes on it, not the original one.*/

    num1 = 7000; 

    cout << "Number inside function became: " << num1 << endl;
}

int main()
{
    int num1;
    num1 = 1000;

    ByValueFun(num1);
    cout << "Number after calling the function became: " << num1 << endl;



    return 0;
}