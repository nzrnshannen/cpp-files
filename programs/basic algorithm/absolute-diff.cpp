/*
    A program that calculates the absolute difference between n and 51. If n is greater than 51, 
    return triple the absolute difference.
*/

#include<iostream>
using namespace std;

int main()
{
    int num1, num2, num3, diff1, diff2, diff3;
    cout << "Enter three values (separated by spaces): ";
    cin >> num1;
    cin >> num2;
    cin >> num3;

    diff1 = (num1 > 51) ? (num1 - 51) * 3 : abs(51 - num1);
    diff2 = (num2 > 51) ? (num2 - 51) * 3 : abs(51 - num2);
    diff3 = (num3 > 51) ? (num3 - 51) * 3 : abs(51 - num3);

    cout << endl << "---\n" << diff1 << endl;
    cout << diff2 << endl; 
    cout << diff3 << endl;
    return 0;
}