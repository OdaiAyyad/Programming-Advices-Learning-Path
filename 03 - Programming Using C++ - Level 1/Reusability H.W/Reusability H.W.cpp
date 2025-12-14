#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct stInfo
{
    string FullName;
    short Age;
    bool IsMarried;
    char Gender;
    string Country;
    string City;
    float MonthlySalary;
};

void ReadInfo(stInfo& Info)
{
    cout << "Enter your full name: ";
    getline(cin, Info.FullName);

    cout << "Enter your age: ";
    cin >> Info.Age;

    cout << "Enter your country: ";
    cin >> Info.Country;

    cout << "Enter your city: ";
    cin >> Info.City;

    cout << "Enter your monthly salary: ";
    cin >> Info.MonthlySalary;

    cout << "What is your gender? ";
    cin >> Info.Gender;

    cout << "Are you married? ";
    cin >> Info.IsMarried;
}

void PrintInfo(stInfo Info)
{
    cout << "\n**************************\n";
    cout << "Full Name: " << Info.FullName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Gender: " << Info.Gender << endl;
    cout << "Married? " << Info.IsMarried << endl;
    cout << "Country: " << Info.Country << endl;
    cout << "City: " << Info.City << endl;
    cout << "Monthly Salary: " << Info.MonthlySalary << endl;
    cout << "Yearly Salary: " << (Info.MonthlySalary * 12) << endl;
    cout << "**************************\n";
}

int main()
{
    stInfo Person1Info;
    ReadInfo(Person1Info);
    PrintInfo(Person1Info);

    return 0;
}