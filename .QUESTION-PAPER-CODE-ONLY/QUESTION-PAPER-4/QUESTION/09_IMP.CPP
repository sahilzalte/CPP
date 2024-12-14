/* Write a program to overload '-'unary operator to negate the values.*/
#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int val) : value(val) {} // Constructor
    Number operator-()
    {
        return -value;
    }
    void display()
    {
        cout << value << endl;
    }
};

int main()
{
    Number num(10);
    (-num).display(); // Negate and display
    return 0;
}
