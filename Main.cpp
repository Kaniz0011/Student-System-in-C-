// Demonstrates OOP principles using Student class

#include "Student.h"
#include <iostream>
using namespace std;

int main() {
    // 1. Using Default Constructor
    Student s1;
    s1.setName("Ali");
    s1.setAge(20);
    s1.setRollNo(101);
    s1.setGPA(3.8);
    s1.displayInfo();

    // 2. Using Parameterized Constructor
    Student s2("Sara", 19, 102, 3.2);
    s2.displayInfo();

    // 3. Using Parameterized Constructor with Default GPA Argument
    Student s3("Ahmed", 21, 103);
    s3.setGPA(2.5);
    s3.displayInfo();

    cout << "\nEnd of program reached. Destructors will now be called automatically.\n";

    return 0;
}