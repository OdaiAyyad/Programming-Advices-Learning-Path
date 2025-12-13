#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string S1, S2, S3;
    cout << "Enter the first string: ";
    getline(cin, S1);
    cout << S1 << "\n";

    cout << "Enter the second string: ";
    getline(cin, S2);
    cout << S2 << "\n";

    cout << "Enter the third string: ";
    getline(cin, S3);
    cout << S3 << "\n";

    cout << "The length of the first string is: " << S1.length() << endl;
    cout << "Characters at 0, 2, 4, 7 are: " << S1[0] << ", " << S1[2] << ", " << S1[4] << ", " << S1[7] << "\n\n";



    return 0;
}