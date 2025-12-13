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

    int Sum = stoi(S1) + stoi(S2);
    cout << Sum << endl; // Will print 30

    // Read strings with spaces:
    string FullName;

    // cin >> FullName;
    // cout << FullName << endl;

    // getline function will solve this problem:
    getline(cin, FullName);
    cout << FullName << endl;

    return 0;
}