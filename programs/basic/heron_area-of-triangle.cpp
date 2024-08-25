/*
    A program to find the area of any triangle using Heron's formula.
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double len_1, len_2, len_3;
    double area, semi_perim;

    cout << "Input the length of 1st side of the triangle: ";
    cin >> len_1;
    cout << "Input the length of 2nd side of the triangle: ";
    cin >> len_2;
    cout << "Input the length of 3rd side of the triangle: ";
    cin >> len_3;

    semi_perim = (len_1 + len_2 + len_3) / 2;

    area = sqrt(semi_perim * ((semi_perim - len_1) * (semi_perim - len_2) * (semi_perim - len_3)));
    
    cout << "---" << endl << "The area of the triangle is: " << area;
    return 0;
}