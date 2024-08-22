#include<iostream>
#include<cmath> //include this

/*
    Some of math functions:
    abs(x)
    sqrt(x)
    ceil(x)
    cos(x)
    floor(x)
    fmax(x, y)
    fmin(x, y)
    fmod(x, y)
    log(x)
    round(x)
    ...
*/
int main()
{
    // sqrt() from cmath

    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;

    std::cout << "Square root of " << x << " is: " << sqrt(x);
}