#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

float ReadNumber(string Message)
{
    float Number = 0;
    cout << Message; cin >> Number;

    return Number;
}

enOperationType ReadOperationType()
{
    char OT = '+';
    cout << "Enter operation type( +, -, *, / ): "; cin >> OT;

    return enOperationType(OT);
}

float Calculator(float Number1, float Number2, enOperationType OperationType)
{
    switch (OperationType)
    {
    case enOperationType::Add:
        return Number1 + Number2;
    case enOperationType::Subtract:
        return Number1 - Number2;
    case enOperationType::Multiply:
        return Number1 * Number2;
    case enOperationType::Divide:
        return Number1 / Number2;
    default:
        return Number1 + Number2;
    }
}

int main()
{
    float Number1 = ReadNumber("Enter the first number: ");
    float Number2 = ReadNumber("Enter the second number: ");

    enOperationType OT = ReadOperationType();

    cout << Number1 << " " << OT << " " << Number2 << " = " << Calculator(Number1, Number2, OT) << endl

    return 0;
}