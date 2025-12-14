#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Professionally, every single function or procedure must do one task, just!

struct stInfo
{
    string FirstName;
    string LastName;
    short Age;
    string Phone;
};

void ReadInfo(stInfo& Info)
{
    cout << "Enter your first name: ";
    getline(cin, Info.FirstName);
    cout << "Enter your last name: ";
    getline(cin, Info.LastName);
    cout << "Enter your age: ";
    cin >> Info.Age;
    cout << "Enter your phone number: ";
    cin >> Info.Phone;
}

void PrintInfo(stInfo Info)
{
    cout << "\n**************************\n";
    cout << "FirstName: " << Info.FirstName << endl;
    cout << "LastName: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "PhoneNumber: " << Info.Phone << endl;
    cout << "**************************\n";
}

int main()
{
    stInfo Person1Info;
    ReadInfo(Person1Info);
    PrintInfo(Person1Info);

    return 0;
}