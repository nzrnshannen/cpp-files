/*
    A program to check whether the two given integers of
    a number are addends of the given sum.
*/

#include<iostream>
using namespace std;

string checker(int num1, int num2, int sum)
{
    return (num1+num2 == sum) ? "True" : "False";
}
int main()
{
    int a, b, c, d, e, f, g, h;
    int sum;
    //a, b (first pair)
    //c, d (second pair)
    //e, f (third pair)
    //g, h (fourth pair)

    cout << "Enter a sum: ";
    cin >> sum;
    cout << "Enter addends for the first pair (separated by space): ";
    cin >> a;
    cin >> b;
    cout << "Enter addends for the second pair (separated by space): ";
    cin >> c;
    cin >> d;
    cout << "Enter addends for the third pair (separated by space): ";
    cin >> e;
    cin >> f;
    cout << "Enter addends for the fourth pair (separated by space): ";
    cin >> g;
    cin >> h;

    cout << endl << checker(a, b, sum);
    cout << endl << checker(c, d, sum); 
    cout << endl << checker(e, f, sum); 
    cout << endl << checker(g, h, sum);

    return 0;
}