#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*Here, we didn't pass the parameter for the function (ByReference(&)), 
because the parameter here is an array, and the arrays be default passed (ByReference)*/

void ReadArrayData(int x[3])
{
    cout << "Enter the first number: "; cin >> x[0];
    cout << "Enter the second number: "; cin >> x[1];
    cout << "Enter the third number: "; cin >> x[2];
}

void PrintArrayData(int x[3])
{

}

int main()
{
    int x[3];

    ReadArrayData(x);


    return 0;
}