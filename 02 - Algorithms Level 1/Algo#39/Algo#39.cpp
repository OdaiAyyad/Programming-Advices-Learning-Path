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

float CalculateRemainder(float TotalBill, float CashPaid)
{
    float Remainder = CashPaid - TotalBill;

    return Remainder;
}

int main()
{
    float TotalBill
    float CashPaid

    cout << "Enter your total bill: "; cin >> TotalBill;
    cout << "Enter the paid cash: "; cin >> CashPaid;

    

    cout << "Remainder = " << Remainder << endl;

    return 0;
}