// Student.h
// Header file for the Student class
// Demonstrates encapsulation and abstraction

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

// CLASS DECLARATION

class Student {
private:
    // Private attributes (Encapsulation)
    string name;
    int age;
    int rollNo;
    double gpa;

public:
    // Constructors
    Student();  // Default constructor
    Student(string n, int a, int r, double g = 0.0); // Parameterized constructor with default argument

    //  Destructor 
    ~Student();

    //  Setter methods (Encapsulation)
    void setName(string n);
    void setAge(int a);
    void setRollNo(int r);
    void setGPA(double g);

    //  Getter methods 
    string getName() const;
    int getAge() const;
    int getRollNo() const;
    double getGPA() const;

    //  Member functions 
    void displayInfo() const;
    char calculateGrade() const;
};

#endif