/*
    A program that swaps two numbers.
*/

#include<iostream>
using namespace std;

int main()
{
    int num1, num2, temp;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "\nBefore swapping: ";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping: ";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}