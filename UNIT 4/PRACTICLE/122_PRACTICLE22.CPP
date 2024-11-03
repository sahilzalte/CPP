#include <iostream>
using namespace std;

// Abstract base class with a pure virtual function
class Animal {
public:
    // Pure virtual function to represent an animal's sound
    virtual void sound() const = 0;
};

// Derived class Dog that provides its own implementation of sound()
class Dog : public Animal {
public:
    void sound() const override {
        cout << "Dog says: Woof!" << endl;
    }
};

// Derived class Cat that provides its own implementation of sound()
class Cat : public Animal {
public:
    void sound() const override {
        cout << "Cat says: Meow!" << endl;
    }
};

// Derived class Cow that provides its own implementation of sound()
class Cow : public Animal {
public:
    void sound() const override {
        cout << "Cow says: Moo!" << endl;
    }
};

int main() {
    // Creating pointers to Animal base class pointing to derived objects
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();
    Animal* animal3 = new Cow();

    // Calling sound() polymorphically
    animal1->sound(); // Outputs: Dog says: Woof!
    animal2->sound(); // Outputs: Cat says: Meow!
    animal3->sound(); // Outputs: Cow says: Moo!

    // Clean up
    delete animal1;
    delete animal2;
    delete animal3;

    return 0;
}
