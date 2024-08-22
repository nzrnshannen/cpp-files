/*
    switch(variable)
    {
        case __: ___; break;
        case __: ___; break;
        ...
        default: _____; break;
    }
*/


#include<iostream>
int main()
{
    char grade;
    std::cout << "Enter grade: ";
    std::cin >> grade;

    switch(grade)
    {
        case 'A': std::cout << "Excellent work!"; break;
        case 'B': std::cout << "Great job!"; break;
        case 'C': std::cout << "Nice job!"; break;
        case 'D': std::cout << "Good try."; break;
        case 'F': std::cout << "You failed!"; break;
        
        default: std::cout << "Invalid input!"; break;
    }
}