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

    return TotalMonths;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Enter your loan amount: ");
    float MonthlyPyment = ReadPositiveNumber("Enter your monthly payment: ");

    cout << "\nYou need (" << TotalMonths(LoanAmount, MonthlyPyment) << ") month(s), to settle this loan.\n";

    return 0;
}