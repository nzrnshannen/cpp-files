/*
    do: void funcName(&param1, &param2)
    example:
    void swap_num(int &i, int &j);
*/

#include <iostream>

// 1: pass by reference
void swap_num(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

// 2: `const` reference: parameter(s) won't change inside the function
int cubeOfNum(int const &i)
{
    return i * i * i;
}

int main()
{

// 1: pass by reference
    int a = 100;
    int b = 200;

    std::cout << "Before swapping: ";
    std::cout << a << ", " << b;

    swap_num(a, b);

    std::cout << "\nAfter swapping: ";
    std::cout << a << ", " << b;

// 2: const reference
    std::cout << "\n----\nCube: " << cubeOfNum(3);

// 3: pointers & references
    int num = 5;
    int *ptr = &num;
    std::cout << "\n---\nNum = " << num;

    *ptr = 10;
    std::cout << "\nNew num = " << num;
}