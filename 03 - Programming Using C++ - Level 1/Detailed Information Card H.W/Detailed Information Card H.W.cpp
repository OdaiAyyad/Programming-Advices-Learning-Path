#include <iostream>
using namespace std;

int main()
{
    string Name = "Odai Ayyad";
    short Age = 23;
    string Country = "Jordan";
    string City = "Amman";
    float MonthlySalary = 1111;
    double YearlySalary = MonthlySalary * 12;
    char Gender = 'M';
    bool Married = 0;

    cout << "**********************\n";
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
    cout << "Country: " << Country << endl;
    cout << "City: " << City << endl;
    cout << "Monthly Salary: " << MonthlySalary << endl;
    cout << "Yearly Salary: " << YearlySalary << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Married? " << Married << endl;
    cout << "**********************\n";

    return 0;
}