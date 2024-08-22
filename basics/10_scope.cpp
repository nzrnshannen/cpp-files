#include<iostream>
void printPattern(int);
std::string name = "Shannen"; //global variable
int main()
{   
    std::cout << "My name is " << name << "\n";
    printPattern(5);
}

void printPattern(int n)
{; //n is local to printPattern(); main() cannot access this
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            std::cout << " " << j << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n My name is " << name << "\n";
}