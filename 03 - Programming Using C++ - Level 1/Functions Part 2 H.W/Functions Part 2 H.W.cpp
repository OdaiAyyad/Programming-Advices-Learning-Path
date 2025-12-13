#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void MySumProcedure()
{
    int num1, num2, result;
    cout << "Enter the first number: "; cin >> num1;
    cout << "Enter the second number: "; cin >> num2;
    cout << "********************************************\n";

    result = num1 + num2;
    cout << result;
}

int MySumFunction()
{
    int num1, num2, result;
    cout << "Enter the first number: "; cin >> num1;
    cout << "Enter the second number: "; cin >> num2;
    cout << "********************************************\n";

    result = num1 + num2;
    
    return result;
}

int main()
{
    MySumProcedure();
    cout << endl;
    cout << MySumFunction() << endl;

    return 0;
}