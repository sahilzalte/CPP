// Write programs to perform input / output operations on binary files
#include <iostream>
#include <fstream>

using namespace std;

class Student {
public:
    char name[50];
    int age;
    char grade;

    // Method to get data from the user
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter grade: ";
        cin >> grade;
    }

    // Method to display data
    void displayData() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student student;

    // Get data from user to write to the file
    cout << "Enter student details:" << endl;
    student.getData();

    // Writing to a binary file
    ofstream outFile("PRT_26_STUDENT.DAT", ios::binary);
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }
    outFile.write(reinterpret_cast<char*>(&student), sizeof(student));
    outFile.close();
    cout << "\nData written to binary file successfully." << endl;

    // Reading from the binary file
    Student readStudent;
    ifstream inFile("PRT_26_STUDENT.DAT", ios::binary);
    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }
    inFile.read(reinterpret_cast<char*>(&readStudent), sizeof(readStudent));
    inFile.close();

    // Display the data read from the file
    cout << "\nData read from binary file:" << endl;
    readStudent.displayData();

    return 0;
}
