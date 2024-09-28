#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound()
    {
        cout << "Animal made a sound" << endl;
    }
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
    Animal *animalPtr = new Animal;
    Animal *dogPtr = new Dog;

    animalPtr->makeSound();
    dogPtr->makeSound();

    delete animalPtr;
    delete dogPtr;
    return 0;
}