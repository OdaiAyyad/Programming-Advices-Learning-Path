#include <iostream>
using namespace std;

int main()
{
    cout << "Integer Variables:\n";
    short MyAge;
    MyAge = 50;
    cout << MyAge << endl;
    MyAge = 23;
    cout << MyAge << endl;
    cout << "MyAge is" << MyAge << " Years Old!\n\n";

    cout << "Other Variables:\n";

    short MyNumber = 50;
    float MyFloatNumber = 7.84;
    double MyDoubleNumber = 21.66659;
    char MyLetter = 'O';
    string MyText = "Odai";
    bool MyBoolean = true;

    cout << MyNumber << endl;
    cout << MyFloatNumber << endl;
    cout << MyDoubleNumber << endl;
    cout << MyLetter << endl;
    cout << MyText << endl;
    cout << MyBoolean << endl << endl;

    char ch1 = 'A', ch2 = 'B', ch3 = 'C';
    cout << ch1 << ch2 << ch3 << " reversed is " << ch3 << ch2 << ch1 << endl;

    return 0;
}