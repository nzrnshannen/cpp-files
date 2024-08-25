/*
    A program to find the area and perimeter of a rectangle.
*/

#include<iostream>
using namespace std;

int main()
{
    double length, width;
    double area, perimeter;

    cout << "Input the length of the rectangle: "; 
    cin >> length;
    cout << "Input the width of the rectangle: ";
    cin >> width;

    area = length * width;
    perimeter = 2 * (length + width);    

    cout << "---\nThe area of the rectangle is: " << area << endl;
    cout << "The perimeter of the rectangle is: " << perimeter << endl;

    return 0;
}