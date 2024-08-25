/*
    A program to calculate volume of sphere.
*/

#include <iostream>
using namespace std;

int main()
{
    int radius;
    double volume = 0;

    cout << "Input the radius of a sphere: ";
    cin >> radius;

    volume = 1.3333 * 3.14159265 * (radius * radius * radius);
    cout << "\n---\nThe volume of a sphere is : " << volume << endl;

    return 0;
}