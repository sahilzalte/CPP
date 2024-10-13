#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    // Virtual function to be overridden
    virtual void draw()
    {
        cout << "Drawing a generic shape." << endl;
    }
};

// Derived class 1
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a circle." << endl;
    }
};

// Derived class 2
class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a rectangle." << endl;
    }
};

// Derived class 3
class Triangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a triangle." << endl;
    }
};

int main()
{
    // Creating objects of derived classes
    Shape *shape1 = new Circle();
    Shape *shape2 = new Rectangle();
    Shape *shape3 = new Triangle();

    // Polymorphism in action
    shape1->draw(); // Calls Circle's draw
    shape2->draw(); // Calls Rectangle's draw
    shape3->draw(); // Calls Triangle's draw

    // Cleaning up memory
    delete shape1;
    delete shape2;
    delete shape3;

    return 0;
}
