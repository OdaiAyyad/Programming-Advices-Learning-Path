#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number = 0;
    do
    {
        cout << Message; cin >> Number;

    } while (Number < 0);

    return Number;
}

float TotalMonths(float LoanAmount, float MonthlyPayment)
{
    float TotalMonths = LoanAmount / MonthlyPayment;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Enter your loan amount: ");
    float MonthlyPyment = ReadPositiveNumber("Enter your monthly payment: ");

    cout << "You need " << TotalMonths(LoanAmount, MonthlyPyment) << " months, to settle this loan.\n";

    return 0;
}