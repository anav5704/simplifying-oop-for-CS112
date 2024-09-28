#include <iostream>
using namespace std;

class Person
{
private:
    string secret = "password"; // Only Person can access

protected:
    int age; // Only Person and Student can access

public:
    string name; // Anyone can access

    Person() {}

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    string getSecret()
    {
        return secret;
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
        this->studentId = studentId;
    }

    void printDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student Id: " << studentId << endl;
        cout << "Secret: " << getSecret() << endl;
    }
};

int main()
{
    Student *studentPtr = new Student("Anav", 20, "S11221203");

    studentPtr->printDetails();

    delete studentPtr;
    return 0;
}