/*
    Program that calculates the volume of a cylinder.
*/

#include<iostream>
using namespace std;

int main()
{
    int radius, height;
    double volume = 0;
    cout << "Input the radius of the cylinder: ";
    cin >> radius;
    cout << "Input the height of the cylinder: ";
    cin >> height;

    volume = 3.14 * (radius * radius) * height;
    cout << "---" << endl << "The volume of a cylinder is: " << volume;
    return 0;
}