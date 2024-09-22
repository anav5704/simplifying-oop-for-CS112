#include <iostream>
using namespace std;

class Course
{
public:
    string courseCode;
    string courseName;

    Course()
    {
        cout << "Default Constructor" << endl;
    }

    Course(string courseCode, string courseName)
    {
        this->courseCode = courseCode;
        this->courseName = courseName;
        cout << "Parameterized Constructor" << endl;
    }

    ~Course()
    {
        cout << "Default destructor" << endl;
    }

    void printDetails()
    {
        cout << "Course Code: " << courseCode << endl;
        cout << "Course Name: " << courseName << endl;
    }
};

int main()
{
    Course *coursePtr = new Course("CS112", "Data Structures and Algorithms");

    coursePtr->printDetails();

    delete coursePtr;
    return 0;
}