#include <iostream>
#include <string>

// Using std namespace to avoid writing std:: before cout, endl, etc.
using namespace std;

// 1. Defining the Class (Blueprint)
class Printer {
public:
    // A Member Function to print Hello World
    void sayHello() {
        cout << "--- Hello World! ---" << endl;
    }

    // A Member Function to print numbers 1-100
    void printNumbers() {
        cout << "Printing numbers from 1 to 100:" << endl;
        for (int i = 1; i <= 100; ++i) {
            cout << i << (i % 10 == 0 ? "\n" : " "); // New line every 10 numbers for readability
        }
    }
};

int main() {
    // 2. Creating an Object (Instance of the Class)
    Printer myPrinter;

    // 3. Accessing member functions using dot operator (.)
    myPrinter.sayHello();
    cout << endl;
    myPrinter.printNumbers();

    return 0;
}
