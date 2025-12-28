#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number;
    do
    {
        cout << Message; cin >> Number;

    } while (Number < 0);

    return Number;
}

float MonthlyPayment(float LoanAmount, float NumberOfMonths)
{
    float MonthlyPayment = LoanAmount / NumberOfMonths;

    return MonthlyPayment;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Enter your loan amount: ");
    float NumberOfMonths = ReadPositiveNumber("How many months you need to settle this loan? ");

    cout << "\nYour monthly payment will be " << MonthlyPayment(LoanAmount, NumberOfMonths) << endl;

    return 0;
}