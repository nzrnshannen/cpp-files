#include<iostream>
using namespace std;

int main()
{
    double num1, num2, num3, num4;
    double avg, total;
    cout << "Input the first 2 numbers (separated by space): "; 
    cin >> num1;
    cin >> num2;
    cout << "Input the last two numbers (separated by space): ";
    cin >> num3;
    cin >> num4;
    total = num1+num2+num3+num4;
    avg = total/4;

    cout << "---" << endl << "Total = " << total;
    cout << "\nAverage of four numbers = " << avg;
    return 0;
}