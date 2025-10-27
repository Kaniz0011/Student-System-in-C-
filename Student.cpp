// Student.cpp
// -----------------------------------------
// Implementation file for Student class
// Demonstrates constructor overloading, destructor, and abstraction
// -----------------------------------------

#include <iostream>
#include "Student.h"
using namespace std;

//  Default Constructor 
// Initializes with default values
Student::Student() {
    name = "Unknown";
    age = 0;
    rollNo = 0;
    gpa = 0.0;
    cout << "Default constructor called for student: " << name << endl;
}

//  Parameterized Constructor 
// Demonstrates constructor overloading and default argument
Student::Student(string n, int a, int r, double g) {
    name = n;
    age = a;
    rollNo = r;
    gpa = g;
    cout << "Parameterized constructor called for student: " << name << endl;
}

//  Destructor
// Called automatically when object is destroyed
Student::~Student() {
    cout << "Destructor called for student: " << name << endl;
}

//  Setter Methods 
void Student::setName(string n) { name = n; }
void Student::setAge(int a) { age = a; }
void Student::setRollNo(int r) { rollNo = r; }
void Student::setGPA(double g) { gpa = g; }

// Getter Methods
string Student::getName() const { return name; }
int Student::getAge() const { return age; }
int Student::getRollNo() const { return rollNo; }
double Student::getGPA() const { return gpa; }

//  Calculate Grade (Abstraction) 
// GPA is used internally to decide grade
char Student::calculateGrade() const {
    if (gpa >= 3.7) return 'A';
    else if (gpa >= 3.0) return 'B';
    else if (gpa >= 2.0) return 'C';
    else return 'F';
}

// Display Student Information 
void Student::displayInfo() const {
    cout << "----------------------------------" << endl;
    cout << "Name: " << name
        << " | Age: " << age
        << " | Roll No: " << rollNo
        << " | GPA: " << gpa
        << " | Grade: " << calculateGrade()
        << endl;
}