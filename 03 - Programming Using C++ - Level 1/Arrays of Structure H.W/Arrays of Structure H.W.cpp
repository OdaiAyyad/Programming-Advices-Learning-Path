#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
    short Age;
    string Phone;
};

void ReadPersonInfo(stInfo& Info)
{
    cout << "Enter your first name: "; cin >> Info.FirstName;
    cout << "Enter your last name: "; cin >> Info.LastName;
    cout << "Enter your age: "; cin >> Info.Age;
    cout << "Enter your phone number: "; cin >> Info.Phone;
}

void PrintPersonInfo(stInfo Info)
{
    cout << "******************************\n";
    cout << "First Name: " << Info.FirstName << endl;
    cout << "Last Name:" << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone Number: " << Info.Phone << "\n\n";
}

int main()
{
    stInfo Person1;

    ReadPersonInfo(Person1);
    PrintPersonInfo(Person1);

    return 0;
}