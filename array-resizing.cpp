#include <iostream>
using namespace std;

int main()
{
    const int OLD_SIZE = 5;
    int *oldArrayPtr = new int[OLD_SIZE];

    // Set values
    for (int i = 0; i < OLD_SIZE; i++)
    {
        oldArrayPtr[i] = i;
    }

    int newSize;
    cout << "Enter new size: ";
    cin >> newSize;

    int *newArrayPtr = new int[newSize];

    // Copy values from old array to new array
    for (int i = 0; i < newSize; i++)
    {
        newArrayPtr[i] = oldArrayPtr[i];
    }

    // Set values for new elements
    for (int i = OLD_SIZE; i < newSize; i++)
    {
        newArrayPtr[i] = i * 10;
    }

    // Print values
    for (int i = 0; i < newSize; i++)
    {
        cout << newArrayPtr[i] << endl; // or: cout << *(newArrayPtr + i) << endl;
    }

    delete[] oldArrayPtr;

    // use new array ...

    delete[] newArrayPtr;
    return 0;
}