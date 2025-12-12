#include <iostream>
#include <cmath>
using namespace std;

struct Car
{
    string Brand;
    string Model;
    int YearOfMade;
};

int main()
{
    Car car1;

    car1.Brand = "Mercedes";
    car1.Model = "AMG GT";
    car1.YearOfMade = 2020;

    cout << car1.Brand << " " << car1.Model << " " << car1.YearOfMade << endl;

    return 0;
}