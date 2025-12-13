#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string S1, S2, S3;
    cout << "Enter the first string: ";
    cin.ignore(1, '\n');
    getline(cin, S1);
    cout << S1 << "\n";

    cout << "Enter the second string: ";
    cin.ignore(1, '\n');
    getline(cin, S2);
    cout << S2 << "\n";

    cout << "Enter the third string: ";
    cin.ignore(1, '\n');
    getline(cin, S3);
    cout << S3 << "\n\n";

    cout << "***********************************************\n";
    cout << "The length of the first string is: " << S1.length() << endl;
    cout << "Characters at 0, 2, 4, 7 are: " << S1[0] << ", " << S1[2] << ", " << S1[4] << ", " << S1[7] << "\n\n";

    cout << "Concatenating second and third strings: " << S2 + S3 << "\n";
    cout << S2 << " * " << S3 << " = " << stoi(S2) * stoi(S3) << endl;

    return 0;
}