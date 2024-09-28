#include <iostream>
using namespace std;

class Math
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }

    int sum(int a, int b, int c)
    {
        return a + b + c;
    }

    int sum(int a, int b, int c, int d)
    {
        return a + b + c + d;
    }
};

int main()
{
    Math *mathPtr = new Math;

    cout << mathPtr->sum(1, 2) << endl;
    cout << mathPtr->sum(1, 2, 3) << endl;
    cout << mathPtr->sum(1, 2, 3, 4) << endl;

    delete mathPtr;
    return 0;
}