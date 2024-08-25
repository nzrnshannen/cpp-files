#include<iostream>
using namespace std;

// indicate the default argument here!
void testPrint(string name, string lang= "C++"); //default if we don't specify the `lang`

int main()
{
    string inputName;
    cout << "Enter name: ";
    cin >>  inputName;
    
    
    testPrint(inputName, "Python"); //Hi! My name is ____ and I'm learning Python. --> has a higher priority compared to the default
    testPrint(inputName); //Hi! My name is ____ and I'm learning C++; --> default value for `lang` is C++
}

void testPrint(string name, string lang)
{
    cout << "Hi! My name is " << name << " and I am learning " << lang << ".\n";
} 