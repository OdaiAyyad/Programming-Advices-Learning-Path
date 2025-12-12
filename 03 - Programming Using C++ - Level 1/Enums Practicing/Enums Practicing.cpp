#include <iostream>
#include <cmath>
using namespace std;

enum Color { Red, Green, Blue }; // {0, 1, 2...} By Default
enum Direction { North, South, East, West };
enum Week { Sat, Sun, Mon, Tue, Wed, Thu, Fri };
enum Gender { Male, Female };
enum Status { Single = 100, Married = 300 }; // Assigning Values Manually

int main()
{
    Color MyColor;
    Direction MyDirection;
    Week Today;
    Gender MyGender;
    Status MyStatus;

    MyColor = Color::Blue;
    MyDirection = Direction::East;
    Today = Week::Fri;
    MyGender = Gender::Male;
    MyStatus = Status::Single;

    cout << "Color is: " << MyColor << endl;
    cout << "Direction is: " << MyDirection << endl;
    cout << "Today is: " << Today << endl;
    cout << "Gender is: " << MyGender << endl;
    cout << "Status is: " << MyStatus << endl;

    return 0;
}