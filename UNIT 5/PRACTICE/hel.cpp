#include <iostream>
using namespace std;

int main()
{
    static int static_a; // Static variable with default value 0
    int regular_a;   // Regular integer variable

    cout << "The value of static integer is  : " << static_a << endl;
    cout << "The value of regular integer is : " << regular_a << endl;

    return 0;
}
