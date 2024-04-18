#include<iostream>
using namespace std;

// Global variable
int sameNameVar = 50;

class MyClass {
public:
    // Static public variable with the same name
    static int sameNameVar;

    // Member variable with the same name
    int Same;


    // Function to display the contents
    void displayContents() {
        cout << "Static Public Variable: " << sameNameVar << endl;
        cout << "Global Variable: " << ::sameNameVar << endl; // Access global variable using ::
        cout << "Local Variable: " << Same << endl;
    }
};

// Initialize the static public variable with the same name
int MyClass::sameNameVar = 20;

int main() {
    // Local variable in main function with the same name
    
 MyClass a;
    // Create an object of MyClass with a parameterized constructor
  a.Same=10;
    // Display the contents of variables
    a.displayContents();

    return 0;
}