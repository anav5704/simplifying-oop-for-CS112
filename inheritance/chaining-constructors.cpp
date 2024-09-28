#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person() {}

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person
{
public:
    string studentId;

    Student() {}

    Student(string name, int age, string studentId)
        : Person(name, age)
    {
        // Person::Person(name, age); can do this too
        this->studentId = studentId;
    }

    void printDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student Id: " << studentId << endl;
    }
};

int main()
{
    Student *studentPtr = new Student("Anav", 20, "S11221203");

    studentPtr->printDetails();

    delete studentPtr;
    return 0;
}