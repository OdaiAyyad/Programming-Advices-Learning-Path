#include <iostream>
using namespace std;

int main()
{
    float BillValue, TotalBill;

    cout << "Enter your bill value: "; cin >> BillValue;

    TotalBill = BillValue * 1.10;
    TotalBill = TotalBill * 1.16;

    cout << "Your total bill = " << TotalBill << endl;

    return 0;
}