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
    cout << "Integer Number: " << num_i << endl;


    return 0;
}