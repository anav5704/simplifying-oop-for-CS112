#include <iostream>

using namespace std;

int main()
{
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

    return 0;
}