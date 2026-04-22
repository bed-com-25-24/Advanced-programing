#include <iostream>
#include <string>

using namespace std;

int main() {
    // Dynamically allocate an integer and a string
    int* dynamicInt = new int;
    string* dynamicString = new string;

    // Prompt user and assign values
    cout << "Enter an integer value: ";
    cin >> *dynamicInt;
    
    cin.ignore(); // Clear newline from buffer before reading string
    cout << "Enter a string value: ";
    getline(cin, *dynamicString);

    // Output the values
    cout << "\n--- Results ---" << endl;
    cout << "Value of dynamic integer: " << *dynamicInt << endl;
    cout << "Value of dynamic string: " << *dynamicString << endl;

    // Clean up memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}
