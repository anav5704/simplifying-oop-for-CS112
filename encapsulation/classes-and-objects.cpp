#include <iostream>
using namespace std;

class Course
{
public:
    string courseCode;
    string courseName;

    void printDetails()
    {
        cout << "Course Code: " << courseCode << endl;
        cout << "Course Name: " << courseName << endl;
    }
};

int main()
{
    Course *coursePtr = new Course;

    coursePtr->courseCode = "CS112";
    coursePtr->courseName = "Data Structures and Algorithms";

    coursePtr->printDetails();

    delete coursePtr;
    return 0;
}