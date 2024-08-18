#include <iostream>

// without virtual: early binding (static binding)
// with virtual: late binding (dynamic binding)

class Animal
{
public:
    // Using virtual enables dynamic binding.
    virtual void makeSound()
    {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound() override
    {
        std::cout << "Dog barks" << std::endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound() override
    {
        std::cout << "Cat meows" << std::endl;
    }
};
class Pegion : public Animal
{
public:
    void makeSound() override
    {
        std::cout << "Pegion guttering" << std::endl;
    }
};

// Corrected sound function
void sound(Animal *animal)
{
    animal->makeSound();
}

int main()
{
    Animal *animalPtr;
    Dog dogObj;
    Cat catObj;
    Pegion pegionObj;

    // // Pointing to Dog object
    // animalPtr = &dogObj;
    // animalPtr->makeSound(); // Output: "Dog barks"

    // // Pointing to Cat object
    // animalPtr = &catObj;
    // animalPtr->makeSound(); // Output: "Cat meows"

    // Alternatively, using the sound() function
    sound(&dogObj); // Output: "Dog barks"
    sound(&catObj); // Output: "Cat meows"
    sound(&pegionObj);

    return 0;
}
