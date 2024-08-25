/*
    Program that converts kilometers per hour to miles per hour.
*/
#include<iostream>
using namespace std;
int main()
{
    double kmph, mph;
    cout << "Input the distance in kilometer: ";
    cin >> kmph;
    
    mph = kmph * 0.621371;
    cout << "---" << endl << "The " << kmph << " km/hr means " << mph << " miles/hr.";
    return 0;
}