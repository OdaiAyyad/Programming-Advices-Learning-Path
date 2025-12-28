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

float Commission(float TotalSales)
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
    float TotalSales;

    
    cout << "\nYour Commission: " << Commission(ReadTotalSales()) << endl;

    return 0;
}