#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadTotalSales()
{
    float TotalSales;
    cout << "Enter your total sales: "; cin >> TotalSales;

    return TotalSales;
}

float GetCommissionPercentage(float TotalSales)
{
    if (TotalSales >= 1000000)
        return 0.01;
    else if (TotalSales >= 500000)
        return 0.02;
    else if (TotalSales >= 100000)
        return 0.03;
    else if (TotalSales >= 50000)
        return 0.05;
    else
        return 0;
}

float CalculateTotalCommission(float TotalSales)
{
    if (TotalSales >= 1000000)
        return (TotalSales * 0.01);
    else if (TotalSales >= 500000)
        return (TotalSales * 0.02);
    else if (TotalSales >= 100000)
        return (TotalSales * 0.03);
    else if (TotalSales >= 50000)
        return (TotalSales * 0.05);
    else
        return 0;
}

int main()
{
    float TotalSales = ReadTotalSales();

    cout << "\nYour commission percentage is: " << GetCommissionPercentage(TotalSales) << endl;
    cout << "\nYour total commission is: " << CalculateTotalCommission(TotalSales) << endl;

    return 0;
}