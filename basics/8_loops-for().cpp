/*
    for(initialization; condi. ; iteration)
    {
        //code here
    }

*/

#include <iostream>

int main()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            std::cout << " * ";
        }
        std::cout << "\n";
    }
}