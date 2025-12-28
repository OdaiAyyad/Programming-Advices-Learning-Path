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

enOperationType ReadOperationTyp()
{
    char OT = '+';
    cout << "Enter operation type( +, -, *, / ): "; cin >> OT;

    return enOperationType(OT);
}

float Calculator(float Num1, float Num2, char Operation)
{
    switch (Operation)
    {
    case '+':
        return Num1 + Num2;
        break;
    case '-':
        return Num1 - Num2;
        break;
    case '*':
        return Num1 * Num2;
        break;
    case '/':
        return Num1 / Num2;
        break;
    default:
        cout << "Invalid Operation!";
    }
}

int main()
{
    float Num1, Num2;
    
    float Number1 = ReadNumber("Enter the first number: ");
    float Number2 = ReadNumber("Enter the second number: ");

    cout << Num1 << " " << Operation << " " << Num2 << " = " << Calculator(Num1, Num2, Operation) << endl

    return 0;
}