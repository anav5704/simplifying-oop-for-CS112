#include <iostream>

using namespace std;

int main()
{
    int number1, number2, sum;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    int *number1Ptr = &number1;
    int *number2Ptr = &number2;

    int **number1PtrPtr = &number1Ptr;
    int **number2PtrPtr = &number2Ptr;

    sum = **number1PtrPtr + **number2PtrPtr;

    cout << "The sum is: " << sum << endl;

    return 0;
}