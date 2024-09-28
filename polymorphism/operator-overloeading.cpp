#include <iostream>
using namespace std;

class Phone
{
public:
    int battery = 0;

    Phone(int battery)
    {
        this->battery = battery;
    }

    Phone operator+(Phone phone)
    {
        Phone temp(0);
        temp.battery = this->battery + phone.battery;
        return temp;
    }

    // int in parameter is used to differentiate between pre-increment and post-increment
    void operator++(int)
    {
        this->battery += 10;
    }
};

int main()
{
    Phone phone1(0), phone2(40), phone3(50);

    phone1 = phone2 + phone3;

    cout << phone1.battery << endl;

    phone1++;

    cout << phone1.battery << endl;

    return 0;
}