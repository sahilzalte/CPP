#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st = "Sahil";
    // Opening files using constructor and writing it
    ofstream out("01_SAMPLE.TXT"); // Write operation
    out << st;

    return 0;
}
