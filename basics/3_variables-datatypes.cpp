/*
    Declaring a variable: int age
    Initialzing a variable: age = 21
    
    <Datatypes>
    double
    int
    char
    string
    bool
*/

#include<iostream>
int main()
{
    int age;
    age = 21;
    std::cout << "I am " << age << " years old\n"; //chaining the output using <<

    double gpa = 1.87;
    char sex = 'F';
    std::string name;

    std::cout << "Enter name: ";
    std::cin >> name;

    bool isStudent = true;
    bool isAddressNear = false;

    std::cout << "Hi! My name is " << name;
    std::cout << "\nI am " << age << " years old\n";
    std::cout << "My gpa is " << gpa << ". ";
    std::cout << sex << "\n";
    std::cout << isStudent << "\n";
    std::cout << isAddressNear;

}