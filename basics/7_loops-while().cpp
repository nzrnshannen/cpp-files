/*
    while(conditional)
    {
        //code here
    }

*/

#include <iostream>
int main()
{
    int input, sum = 0;

    std::cout << "Enter a number: ";
    std::cin >> input;
    
    while(input!=0)
    {
        sum+= input;
        std::cout << "Enter a number: ";
        std::cin >> input;
    }

    std::cout << "Sum = " << sum;
    std::cout << "\n\n\t *** END OF PROGRAM ***";
}