// Write a C++ program to copy data from one file to another
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Declare input and output file streams
    ifstream inputFile("source.txt", ios::in);
    ofstream outputFile("destination.txt", ios::out);

    // Check if the input file is open
    if (!inputFile)
    {
        cerr << "Error: Could not open the source file!" << endl;
        return 1;
    }

    // Check if the output file is open
    if (!outputFile)
    {
        cerr << "Error: Could not open the destination file!" << endl;
        return 1;
    }

    // Copy content from source file to destination file
    char ch;
    while (inputFile.get(ch))
    {
        outputFile.put(ch);
    }

    // Close both files
    inputFile.close();
    outputFile.close();

    cout << "File copied successfully!" << endl;
    return 0;
}
