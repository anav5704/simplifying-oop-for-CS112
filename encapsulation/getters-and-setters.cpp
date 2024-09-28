#include <iostream>
using namespace std;

class Course
{
public:
    string courseCode;
    string courseName;

    Course()
    {
        cout << "Default constructor" << endl;
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

    void setCourseCode(string courseCode)
    {
        this->courseCode = courseCode;
    }

    void setCourseName(string courseName)
    {
        this->courseName = courseName;
    }

    string getCourseCode()
    {
        return courseCode;
    }

    string getCourseName()
    {
        return courseName;
    }

    void printDetails()
    {
        cout << "Course Code: " << getCourseCode() << endl;
        cout << "Course Name: " << getCourseName() << endl;
    }
};

int main()
{
    Course *coursePtr = new Course;

    coursePtr->setCourseCode("CS112");
    coursePtr->setCourseName("Data Structures and Algorithms");

    coursePtr->printDetails();

    delete coursePtr;
    return 0;
}
