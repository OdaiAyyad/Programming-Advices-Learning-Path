#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadInfo(float &Num1, float &Num2, char &Operation)
{
    cout << "Enter the first number: "; cin >> Num1;
    cout << "Enter the second number: "; cin >> Num2;
    cout << "Enter the operation you want: "; cin >> Operation;
}

float ReadNumber(string Message)
{
    float Number;
    do
    {
        cout << Message; cin >> Number;

    } while (Number < 0);

    return Number;
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

    ReadInfo(Num1, Num2, Operation);

    cout << Num1 << " " << Operation << " " << Num2 << " = " << Calculator(Num1, Num2, Operation) << endl

    return 0;
}