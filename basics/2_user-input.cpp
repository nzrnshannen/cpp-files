#include <iostream>

// std::cin -> stands for character input; reads user input (uses >>)
int main()
{
    int age = 0;
    std::cout << "Enter your age: ";
    std::cin >> age; 
    
    std::cout << age;
}
