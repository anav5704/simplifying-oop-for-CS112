#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound() = 0;
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Woof! Woof!" << endl;
    }
};

int main()
{
    // Animal *animalPtr = new Animal; Not allowed
    Animal *dogPtr = new Dog;

    // animalPtr->makeSound(); Not allowed
    dogPtr->makeSound();

    delete dogPtr;
    return 0;
}