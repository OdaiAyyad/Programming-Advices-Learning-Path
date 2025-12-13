#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string MyString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of this string is: " << MyString.length() << endl;

    cout << MyString[0] << endl; // Will print A
    cout << MyString[2] << endl; // Will print C

    string S1 = "10", S2 = "20";
    string S3 = S1 + S2; // Concatenation

    cout << S3 << endl; // Will print 1020



    return 0;
}