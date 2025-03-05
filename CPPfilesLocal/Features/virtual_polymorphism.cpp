#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound()
    {
        std::cout << "Some generic sound" << std::endl;
    }
};
class Dog : public Animal
{
public:
    void makeSound() override
    { // Overrides the base class version
        std::cout << "Woof!" << std::endl;
    }
};
// Using polymorphism:
// meaning of & here is reference to the object
// so that we can pass the object by reference
// and not by value
void playWithAnimal(Animal &animal)
{
    animal.makeSound();
}
int main()
{
    Animal animal;
    Dog dog;
    playWithAnimal(animal);
    playWithAnimal(dog);
    return 0;
}