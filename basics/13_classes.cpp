/*
    CLASS
    a) attributes
        - also known as member data
        - consist of information about an instance of the class
    b) methods
        - also known as member functions
        - functions that can be used with an instance of the class

    Syntax:
    class <Classname>{
        //attributes here
        int age;
        ...

    public:  <-- scope of class members (public, private)
        //method
        void <method_name>()
        {
            //code here...
        }
    };

    =============================================
    CONSTRUCTORS
    - special kind of method that enabels control regarding how the objects
    of a class shoudl be created

    example:
    class Student{
        <attributes here>

    public:
        Student(<attributes here>): attribute1(__), attribute2(__), ...{};
    };

    ===============================================
    DESTRUCTOR
    - special method that handles object destruction, generally focused
    on preventing memory leaks
    - doesn't take arguments as input and their names are always preceded by a
    tilde ~.

    example:
    Student::~Student(){
        //any final clean up here
    }
*/

#include<iostream>

class Student{
    std::string name;
    int age;
    std::string course;
    double gpa;

public:
    Student(std::string studName, int studAge, std::string studCourse, double stud_gpa):
    name(studName), age(studAge), course(studCourse), gpa(stud_gpa){}

    void studentInfo()
    {
        std::cout << "Name: " << name;
        std::cout << "\nAge: " << age;
        std::cout << "\nCourse: " << course;
        std::cout << "\nGPA: " << gpa;
    }
};
int main()
{
    //stud1 is the object
    Student stud1("Shannen Nazareno", 21, "Information Systems", 1.87);
    stud1.studentInfo(); //use the (.) dot to access members
}