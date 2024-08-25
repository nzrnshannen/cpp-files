/*
    Program to convert temperature in Fahrenheit to Celsius
*/

#include<iostream>
using namespace std;
int main()
{
    double fahrenheit, celsius;
    cout << "Input the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5/9;
    cout << "---" << endl << "The temperature in Celsius: " << celsius;

    return 0;
}