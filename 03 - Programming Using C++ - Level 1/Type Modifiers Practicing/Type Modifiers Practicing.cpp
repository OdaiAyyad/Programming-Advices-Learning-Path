#include <iostream>
using namespace std;

int main()
{
    // By default, everything is signed!!
    int v1;
    signed int v2; 
    // The same

    unsigned int v3;

    short int v4;
    short v5;
    // The same

    unsigned short int v6;
    unsigned short v7;
    //The same

    signed long int v8;
    long int v9;
    long v10;
    // The same;

    unsigned long v11;

    long long int v12;

    unsigned long long v13;

    signed char v15;
    char v16;
    // The same

    unsigned char v17;

    // Examples on the above type modifiers:
    double distance = 56E12; // 56E12 is equal to 56*10^12
    cout << distance << endl;

    short d = 34342323; // Error! out of range
    cout << d << endl;

    unsigned int a = -10; // Error! can only store positive numbers
    cout << a << endl;

    return 0;
}