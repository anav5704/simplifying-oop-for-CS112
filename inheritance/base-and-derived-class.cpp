#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    // A default constructor is required
    Person() {}
};

class Student : public Person
{
public:
    void printDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student *studentPtr = new Student;

    studentPtr->name = "Anav";
    studentPtr->age = 20;

    studentPtr->printDetails();

    delete studentPtr;
    return 0;
}