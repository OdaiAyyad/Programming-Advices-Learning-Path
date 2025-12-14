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

void ByReferenceFun(int& num1) // &: this give us access on the (address) of the variable
{
    /*This considered as a (By Reference) function, and unlike the above (By Value) function this 
    function apply changes on the original variable not on a copy of it.*/

    num1 = 7000;

    cout << "Number inside function became: " << num1 << endl;
}

int main()
{
    int num1;
    num1 = 1000;

    ByValueFun(num1);
    cout << "Number after calling ByValue function became: " << num1 << endl;

    ByReferenceFun(num1);
    cout << "Number after calling ByReference function became: " << num1 << endl;

    return 0;
}