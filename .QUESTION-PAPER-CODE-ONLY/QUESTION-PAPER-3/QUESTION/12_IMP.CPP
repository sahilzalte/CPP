#include <iostream>
#include <string>
using namespace std;

class String {
    string value;

public:
    // Default constructor
    String() {}

    // Parameterized constructor
    String(const string &val) : value(val) {}

    // Function to accept user input
    void get_data() {
        cout << "Enter a string: ";
        getline(cin, value);
    }

    // Overloaded '+' operator
    String operator+(const String &obj) {
        return String(value + obj.value);  // Proper string concatenation
    }

    // Function to display the string
    void display() const {
        cout << value << endl;
    }
};

int main() {
    String str1, str2;
    str1.get_data();
    str2.get_data();

    String result = str1 + str2;
    cout << "Concatenated String: ";
    result.display();

    return 0;
}
