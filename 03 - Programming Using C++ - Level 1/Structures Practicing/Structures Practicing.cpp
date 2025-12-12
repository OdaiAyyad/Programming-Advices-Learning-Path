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
    Car car1, car2;

    car1.Brand = "Mercedes";
    car1.Model = "AMG GT";
    car1.YearOfMade = 2020;

    car2.Brand = "BMW";
    car2.Model = "M5";
    car2.YearOfMade = 2018;

    cout << car1.Brand << " " << car1.Model << " " << car1.YearOfMade << endl;
    cout << car2.Brand << " " << car2.Model << " " << car2.YearOfMade << endl;

    return 0;
}