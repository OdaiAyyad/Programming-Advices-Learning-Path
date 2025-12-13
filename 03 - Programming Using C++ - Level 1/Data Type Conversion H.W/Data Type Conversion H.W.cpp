#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string st1 = "43.22";

    double num_d = stod(st1);
    float num_f = stof(st1);
    int num_i = stoi(st1);

    cout << "Double Number: " << num_d << endl;
    cout << "Float Number: " << num_f << endl;
    cout << "Integer Number: " << num_i << endl << endl;

    int N1 = 20;
    string str1 = to_string(N1);

    cout << "N1 to String: " << str1 << endl;

    double N2 = 33.5;
    string str2 = to_string(N2);

    cout << "N2 to String: " << str2 << endl;

    float N3 = 55.23;
    string str3 = to_string(N3);
    int int3 = int(N3);

    cout << "N3 to String: " << str3 << endl;
    cout << "N3 to Integer: " << int3 << endl;

    return 0;
}