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
    Person(string n, int a)
    {
        name = n;
        age = a;
    }

    virtual void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class - Student
class Student : public Person
{
private:
    int rollNo;

public:
    Student(string n, int a, int r)
        : Person(n, a)
    {
        rollNo = r;
    }

    void display() override
    {
        cout << "Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

// Derived class - Faculty
class Faculty : public Person
{
private:
    string subject;

public:
    Faculty(string n, int a, string s)
        : Person(n, a)
    {
        subject = s;
    }

    void display() override
    {
        cout << "Faculty Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    Student s("Ayush", 20, 101);
    Faculty f("Dr. Sharma", 45, "Computer Science");

    // Base class pointers
    Person *p1 = &s;
    Person *p2 = &f;

    // Runtime polymorphism
    p1->display();
    cout << endl;

    p2->display();

    return 0;
}
