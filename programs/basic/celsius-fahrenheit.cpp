/*
    Program to convert temperature in Celsius to Fahrenheit
*/

#include<iostream>
using namespace std;

int main()
{
    double celsius, fahrenheit;
    cout << "Input the temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;
    cout << "---" << endl << "The temperature in Fahrenheit: " << fahrenheit;
    return 0;
}