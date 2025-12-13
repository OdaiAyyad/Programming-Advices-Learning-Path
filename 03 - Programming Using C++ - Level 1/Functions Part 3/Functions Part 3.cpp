#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int MySumFunction(int num1, int num2)
{
    //cout << "Enter the first number: "; cin >> num1;
    //cout << "Enter the second number: "; cin >> num2;

    return num1 + num2;
}

int main()
{
    cout << MySumFunction(10, 20) << endl;

    return 0;
}