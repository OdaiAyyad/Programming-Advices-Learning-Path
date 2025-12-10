#include <iostream>
using namespace std;

int main()
{
    string Name;
    int Age;
    string Country;
    string City;
    float MonthlySalary;
    char Gender;
    bool Married;

    cout << "Please, fill out the following information about you:\n";
    cout << "Name: "; cin >> Name;
    cout << "\nAge: "; cin >> Age;
    cout << "\nCountry:"; cin >> Country;
    cout << "\nCity: "; cin >> City;
    cout << "\nMonthly Salary: "; cin >> MonthlySalary;
    float YearlySalary = MonthlySalary * 12;
    cout << "\nGender: "; cin >> Gender;
    cout << "\nAre you married? "; cin >> Married;

    cout << endl;

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