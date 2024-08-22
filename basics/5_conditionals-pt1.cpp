/*
    if(condition){
        //code here
    }
    else if(condition){
        //code here
    }
    else
    {
        //code here
    }

*/

#include<iostream>

int main()
{
    int age;
    std::cout << "Enter age: ";
    std::cin >> age;

    if(age <= 0)
    {
        std::cout << "Invalid age!";
    }
    else if (age < 18)
    {
        std::cout << "Not an adult yet";
    }
    else
    {
        std::cout << "You're an adult";
    }
}

/*
    RELATIONAL OPERATORS
    ==
    !=
    >, <
    >=, <=

    LOGICAL OPERATORS
    &&
    || 
    !
*/