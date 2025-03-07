#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
public:
    string name;
    int age;

    // Constructor for Person class
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Method to display information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
public:
    string student_id;

    // Constructor for Student class
    Student(string n, int a, string id) : Person(n, a) {  // Calling base class constructor
        student_id = id;
    }

    // Method to display Student information
    void displayInfo() {
        Person::displayInfo();  // Calling base class displayInfo
        cout << "Student ID: " << student_id << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
public:
    string subject;

    // Constructor for Teacher class
    Teacher(string n, int a, string sub) : Person(n, a) {  // Calling base class constructor
        subject = sub;
    }

    // Method to display Teacher information
    void displayInfo() {
        Person::displayInfo();  // Calling base class displayInfo
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Create a Student object
    Student student("Alice", 20, "S12345");
    cout << "Student Information:" << endl;
    student.displayInfo();

    cout << "\n";

    // Create a Teacher object
    Teacher teacher("Mr. John", 40, "Mathematics");
    cout << "Teacher Information:" << endl;
    teacher.displayInfo();

    return 0;
}
