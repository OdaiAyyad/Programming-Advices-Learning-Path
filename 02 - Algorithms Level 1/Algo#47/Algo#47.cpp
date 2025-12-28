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

int main()
{
    int LoanAmount, MonthlyPyment;

    cout << "Enter your loan amount: "; cin >> LoanAmount;
    cout << "Enter your monthly payment: "; cin >> MonthlyPyment;

    int Months = LoanAmount / MonthlyPyment;

    cout << "You need " << Months << " months, to settle this loan.\n"

    return 0;
}