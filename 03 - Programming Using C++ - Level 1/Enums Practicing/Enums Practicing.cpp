#include <iostream>
#include <cmath>
using namespace std;

enum Colors { Red, Green, Blue};

int main()
{
    Colors Color1;

    Color1 = Colors::Blue;

    cout << "Color is: " << Color1 << endl;

    return 0;
}