#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int *arrayPtr = new int[SIZE];

    // Set values
    for (int i = 0; i < SIZE; i++)
    {
        arrayPtr[i] = i;
    }

    // Print values
    for (int i = 0; i < SIZE; i++)
    {
        cout << arrayPtr[i] << endl; // or: cout << *(arrayPtr + i) << endl;
    }

    delete[] arrayPtr;

    return 0;
}