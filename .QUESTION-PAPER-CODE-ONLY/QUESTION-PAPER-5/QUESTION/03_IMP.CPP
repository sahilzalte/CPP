/* Write a C++ program to find smallest number from two numbers using friend function.
    (Hint:use two Classes)*/
    
#include <iostream>
using namespace std;

class Class1; // Forward declaration

class Class2 {
    int num2;

public:
    Class2(int n) : num2(n) {}

    friend int findSmallest(Class1, Class2); // Friend function declaration
};

class Class1 {
    int num1;

public:
    Class1(int n) : num1(n) {}

    friend int findSmallest(Class1, Class2); // Friend function declaration
};

// Friend function definition
int findSmallest(Class1 obj1, Class2 obj2) {
    return (obj1.num1 < obj2.num2) ? obj1.num1 : obj2.num2;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Class1 obj1(a);
    Class2 obj2(b);

    cout << "The smallest number is: " << findSmallest(obj1, obj2) << endl;

    return 0;
}
