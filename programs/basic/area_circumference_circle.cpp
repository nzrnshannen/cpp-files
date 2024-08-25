/*
    Program to find the area and circumference of a circle;
*/

#include<iostream>
using namespace std;
const double PI = 3.1415;
int main()
{
    double radius;
    double area, circumference;
    cout << "Input the radius (1/2 of diameter) of a circle: ";
    cin >> radius;

    area = PI * (radius * radius);
    circumference = 2 * PI * radius;
    cout << "---" << endl << "The area of the circle is: " << area << "\n"; 
    cout <<"The circumference of the circle is: " << circumference;
    return 0;
}