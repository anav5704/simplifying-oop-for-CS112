#include <iostream>

using namespace std;

int main()
{
    int number1, number2, sum;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    int *ptr1 = &number1;
    int *ptr2 = &number2;

    sum = *ptr1 + *ptr2;

    cout << "The sum is: " << sum << endl;

    return 0;
}