#include <iostream>
using namespace std;

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int *arrayPtr = array;

    for (int i = 0; i < 5; i++)
    {
        cout << arrayPtr[i] << endl; // or cout << *(arrayPtr + i) << endl;
    }

    return 0;
}