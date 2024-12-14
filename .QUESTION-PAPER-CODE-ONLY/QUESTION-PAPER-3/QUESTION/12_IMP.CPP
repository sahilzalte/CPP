#include <iostream>
using namespace std;

class String
{
    string value;

public:
    // Function to accept user input
    void get_data()
    {
        getline(cin, value);
        // cin>>value;
    }

    // Overloaded '+' operator to return a String object
    String operator+( String &obj)
    {
        String result;
        result.value = value + obj.value;
        return result;
    }

    // Function to display the string
    void display()
    {
        cout << value << endl;
    }
};

int main()
{
    String str1, str2;

    // Accept input for both strings
    cout << "Enter first string: ";
    str1.get_data();
    cout << "Enter second string: ";
    str2.get_data();

    // Concatenate the two strings and display the result
    String result = str1 + str2;
    cout << "Concatenated String: ";
    result.display();

    return 0;
}