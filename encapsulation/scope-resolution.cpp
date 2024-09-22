#include <iostream>
using namespace std;

class Course
{
public:
    string courseCode;
    string courseName;

    // Method prototypes
    Course();
    Course(string courseCode, string courseName);
    ~Course();

    void setCourseCode(string courseCode);
    void setCourseName(string courseName);

    string getCourseCode();
    string getCourseName();

    void printDetails();
};

// Method implementations
Course::Course()
{
    cout << "Default constructor" << endl;
}

Course::Course(string courseCode, string courseName)
{
    this->courseCode = courseCode;
    this->courseName = courseName;
    cout << "Parameterized Constructor" << endl;
}

Course::~Course()
{
    cout << "Default destructor" << endl;
}

void Course::setCourseCode(string courseCode)
{
    this->courseCode = courseCode;
}

void Course::setCourseName(string courseName)
{
    this->courseName = courseName;
}

string Course::getCourseCode()
{
    return courseCode;
}

string Course::getCourseName()
{
    return courseName;
}

void Course::printDetails()
{
    cout << "Course Code: " << getCourseCode() << endl;
    cout << "Course Name: " << getCourseName() << endl;
}

int main()
{
    Course *coursePtr = new Course("CS112", "Data Structures and Algorithms");

    coursePtr->printDetails();

    delete coursePtr;
    return 0;
}