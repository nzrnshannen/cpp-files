/*
    Vector
    - dynamic list of items, that can shrink and grow in size
    - created using: std::vector<type>name(numOfElements);
    - can only store values of the same type
    NOTE: always include '#include<vector>'

    Index
    - refers to an element's position within an ordered list, like a vector or an array
    - first element at index 0

    Accessing: name[index]
    Add element: .push_back(___) -> add element to the "end" of vector
    Remove element: .pop_back() -> remove element from the "end" of a vector

    .size() -> prints size or number of elements in that vector
*/

#include<iostream>
#include<vector>
int main()
{
    std::vector<int> grades(3);
    grades[0] = 90;
    grades[1] = 86;
    grades[2] = 98;

    std::cout << grades[0] << "\n";
    std::cout << grades[2] << "\n\n"; 

    //adding an element

    std::vector<std::string> wishlist;
    wishlist.push_back("Laptop"); 
    wishlist.push_back("Dress");
    wishlist.push_back("Oculus");
    wishlist.push_back("Bag");

    wishlist.pop_back(); //removes "Bag"
    
    std::cout << wishlist.size();

    
}

