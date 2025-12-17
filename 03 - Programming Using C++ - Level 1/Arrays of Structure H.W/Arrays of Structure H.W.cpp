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
    cout << "*************************\n";
    cout << "First Name: " << Info.FirstName << endl;
    cout << "Last Name:" << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone Number: " << Info.Phone << endl;
    cout << "*************************\n\n";
}

void ReadAllInfo(stInfo People[2])
{
    ReadPersonInfo(People[0]);
    ReadPersonInfo(People[1]);
}

void PrintAllInfo(stInfo People[2])
{
    PrintPersonInfo(People[0]);
    PrintPersonInfo(People[1]);
}

int main()
{
    stInfo People[2];

    ReadAllInfo(People);
    PrintAllInfo(People);
   
    return 0;
}