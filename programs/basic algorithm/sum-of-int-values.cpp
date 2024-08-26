/*
    The program computes the sum of two given integer values, and if the two
    values are the same, it returns their triple sum.
*/

#include<iostream>
using namespace std;

int main()
{
    int num1, num2; //pair 1
    int num3, num4; //pair 2
    int num5, num6; //pair 3

    int p1_sum, p2_sum, p3_sum;

    cout << "Input 2 numbers for the first pair (separated by space): ";
    cin >> num1;
    cin >> num2;
    p1_sum = (num1 == num2) ? ((num1 + num1) * 3) : (num1 + num2);

    cout << endl << "Input 2 numbers for the second pair (separated by space): ";
    cin >> num3;
    cin >> num4;
    p2_sum = (num3 == num4) ? ((num3 + num3) * 3) : (num3 + num4);

    cout << endl << "Input 2 numbers for the third pair (separated by comma): ";
    cin >> num5;
    cin >> num6;
    p3_sum = (num5 == num6) ? ((num5 + num5 ) * 3) : (num5 + num6);

    cout << "---" << endl << p1_sum << endl << p2_sum << endl << p3_sum << endl;
    return 0;
}