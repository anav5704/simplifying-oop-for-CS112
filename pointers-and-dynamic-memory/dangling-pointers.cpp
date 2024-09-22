#include <iostream>
using namespace std;

int main()
{
    // Dangling pointer cleanup example for "dynamic-primitives.cpp"

    int number1, number2, sum;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    int *number1Ptr = new int(number1);
    int *number2Ptr = new int(number2);

    sum = *number1Ptr + *number2Ptr;

    cout << "The sum is: " << sum << endl;

    delete number1Ptr;
    delete number2Ptr;

    // Set pointers to null
    number1Ptr = nullptr;
    number2Ptr = nullptr;

    return 0;
}