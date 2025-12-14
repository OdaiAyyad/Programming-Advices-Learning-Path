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

}

int main()
{
    stInfo Person1Info;
    ReadInfo(Person1Info);
    PrintInfo(Person1Info);

    return 0;
}