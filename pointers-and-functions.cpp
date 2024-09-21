#include <iostream>
using namespace std;

int sum(int *number1Ptr, int *number2Ptr)
{
    return *number1Ptr + *number2Ptr;
}

int difference(int *number1Ptr, int *number2Ptr)
{
    return *number1Ptr - *number2Ptr;
}

int product(int *number1Ptr, int *number2Ptr)
{
    return *number1Ptr * *number2Ptr;
}

int quotient(int *number1Ptr, int *number2Ptr)
{
    return *number1Ptr / *number2Ptr;
}

int main()
{
    int number1, number2;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    int *number1Ptr = &number1;
    int *number2Ptr = &number2;

    cout << "Sum: " << sum(number1Ptr, number2Ptr) << endl;
    cout << "Difference: " << difference(number1Ptr, number2Ptr) << endl;
    cout << "Product: " << product(number1Ptr, number2Ptr) << endl;
    cout << "Quotient: " << quotient(number1Ptr, number2Ptr) << endl;

    return 0;
}