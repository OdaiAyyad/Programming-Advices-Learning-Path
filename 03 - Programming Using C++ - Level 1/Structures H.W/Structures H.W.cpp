#include <iostream>
#include <cmath>
using namespace std;

struct StAddress
{
    string Country;
    string City;
    string Street;
    string PoBox;
};

struct StSalary
{
    float MonthlySalary;
    float YearlySalary;
};

struct StPerson
{
    string FullName;
    short Age;
    bool IsMarried;
    char Gender;
    string Phone;
    StAddress Address;
    StSalary Salary;
};

int main()
{
    StPerson person1;

    person1.FullName = "Odai Ayyad";
    person1.Age = 23;
    person1.Gender = 'M';
    person1.IsMarried = 0;
    person1.Salary.MonthlySalary = 7500;
    person1.Salary.YearlySalary = person1.Salary.MonthlySalary * 12;
    person1.Address.Country = "Jordan";
    person1.Address.City = "Amman";

    cout << "**********************\n";
    cout << "Name: " << person1.FullName << endl;
    cout << "Age: " << person1.Age << endl;
    cout << "Married? " << person1.IsMarried << endl;
    cout << "Gender: " << person1.Gender << endl;
    cout << "Country: " << person1.Address.Country << endl;
    cout << "City: " << person1.Address.City << endl;
    cout << "Monthly Salary: " << person1.Salary.MonthlySalary << endl;
    cout << "Yearly Salary: " << person1.Salary.YearlySalary << endl;
    cout << "**********************\n";

    return 0;
}