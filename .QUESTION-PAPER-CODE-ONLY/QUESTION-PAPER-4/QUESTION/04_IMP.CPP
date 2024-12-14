// Write a C++ program to count the number of lines in a file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputfile("example.txt"); // Open the input file
    if (!inputfile)
    {
        cout << "Error opening file";
        return 1;
    }

    int lineCount = 0;
    char ch;
    while (inputfile.get(ch))
    {
        if (ch == '\n') // Count newline characters
        {
            lineCount++;
        }
    }

    inputfile.close();

    cout << "Number of lines in the file: " << lineCount + 1 << endl; // Add 1 for the last line
    return 0;
}
