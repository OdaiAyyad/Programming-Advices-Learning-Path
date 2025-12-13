#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int num1;
    float num2 = 18.99;

    // num1 = num2; // Implicit conversion

    // num1 = (int)num2; // Explicit Conversion

    num1 = int(num2); // Explicit Conversion

    cout << num1 << "\n\n";

    // Converting String to int, float, double
    // Include string library first: #include <string>

    string str = "123.456";

    // string to int
    int num_int = stoi(str);

    // string to float
    float num_float = stof(str);

    // string to double
    double num_double = stod(str);

    cout << "num_int = " << num_int << endl;
    cout << "num_float = " << num_float << endl;
    cout << "num_double = " << num_double << "\n\n";

    // Converting Numerical Data Types to String

    int num3 = 123;
    double num4 = 18.99;

    string st1, st2;
    st1 = to_string(num3);
    st2 = to_string(num4);

    cout << st1 << endl;
    cout << st2 << "\n\n";

    return 0;
}