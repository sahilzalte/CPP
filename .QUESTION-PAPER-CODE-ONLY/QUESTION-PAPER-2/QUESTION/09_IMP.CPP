/*  Write C++ program to overload binary operator + to concatenate two strings*/
#include <iostream>
#include <string>
using namespace std;

class String
{
    string value;

public:
    String(string val) : value(val) {}
    String operator+(const String &obj)
    {
        return String(value + obj.value);
    } 
    void display()
    {
        cout << value << endl;
    } 
};

int main()
{
    String str1("Hello, "), str2("World!");
    String result = str1 + str2; 
    result.display();            
    return 0;
}
