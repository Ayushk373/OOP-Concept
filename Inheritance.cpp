#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
protected:
    string name;
    int age;

public:
    void getPersonDetails()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person
{
private:
    int rollNo;

public:
    void getStudentDetails()
    {
        getPersonDetails();

        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void displayStudentDetails()
    {
        displayPersonDetails();

        cout << "Roll Number: " << rollNo << endl;
    }
};

// Derived class Faculty
class Faculty : public Person
{
private:
    string subject;

public:
    void getFacultyDetails()
    {
        getPersonDetails();

        cout << "Enter Subject: ";
        cin >> subject;
    }

    void displayFacultyDetails()
    {
        displayPersonDetails();

        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    Student s;
    Faculty f;

    cout << "Enter Student Details" << endl;
    s.getStudentDetails();

    cout << "\nEnter Faculty Details" << endl;
    f.getFacultyDetails();

    cout << "\n--- Student Details ---" << endl;
    s.displayStudentDetails();

    cout << "\n--- Faculty Details ---" << endl;
    f.displayFacultyDetails();

    return 0;
}
