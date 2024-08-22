#include <iostream>

//function declaration
int biggerNum(int a, int b);

int main()
{
    int result = biggerNum(5, 6); //calling a function
    //biggerNum(5, 6) => (5, 6) are the arguments
    std::cout << result;
}

//function definition
int biggerNum(int x, int y) //(int x, int y) are the parameters
{
    return (x > y) ? x : y;
}