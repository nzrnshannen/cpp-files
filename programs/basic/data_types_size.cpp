/*
    A program to find the size of fundamental data types.
*/

#include<iostream>
using namespace std;

int main()
{
    cout << "SIZE OF FUNDAMENTAL DATA TYPES\n-------------------------------\n";
    cout << "The sizeof(char) is: " << sizeof(char) << " byte\n";
    cout << "The sizeof(short) is: " << sizeof(short) << " bytes\n";
    cout << "The sizeof(int) is: " << sizeof(int) << " bytes\n";
    cout << "The sizeof(long) is: " << sizeof(long) << " bytes\n";
    cout << "The sizeof(long long) is: " << sizeof(long long) << " bytes\n";
    cout << "The sizeof(float) is: " << sizeof(float) << " bytes\n";
    cout << "The sizeof(double) is: " << sizeof(double) << " bytes\n";
    cout << "The sizeof(long double) is: " << sizeof(long double) << " bytes\n";
    cout << "The sizeof(bool) is: " << sizeof(bool) << " byte\n"<< endl;

    return 0;
}
