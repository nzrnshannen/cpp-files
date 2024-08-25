/*
    Program to calculate the volume of a cube.
*/

#include <iostream>
using namespace std;

int main()
{   
    int cube, vol_cube;
    cout << "Input the side of a cube: ";
    cin >> cube;
    vol_cube = cube * cube * cube;
    cout << "---" << endl << "The volume of a cube is : " << vol_cube;
    return 0;
}