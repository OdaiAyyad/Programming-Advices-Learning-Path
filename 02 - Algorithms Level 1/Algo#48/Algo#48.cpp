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
    int LoanAmount, Months;

    cout << "Enter your loan amount: "; cin >> LoanAmount;
    cout << "How many months you need to settle this loan? "; cin >> Months;

    cout << "\nYour monthly payment will be " << MonthlyPyment << endl

    return 0;
}