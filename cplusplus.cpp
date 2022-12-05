// to compile: use g++ instead of gcc
// files end with .cpp

#include <iostream>
using namespace std;

int main()
{
    // to print:
    std::cout << "hello world!\n"; // outputs: "hello world!"

    int n = 5;
    std::cout << "n is " << n << std::endl; // outputs: "n is 5"    // endl is same thing as \n

    // shortcut to so you dont hace to put std everytime:
    // "using namespace std;" above
    cout << "hello world!\n"; // outputs: "hello world!"
    cout << "n is " << n << std::endl;

    // cin is for input
    int a;
    cout << "enter a number: ";
    cin >> a;
    cout << "a is " << a << endl;

    // another input example
    int num1, num2;
    cout << "enter two numbers ";
    cin >> num1 >> num2;
    cout << "their sum is " << num1 + num2 << endl;



    // float
    float x = 57.732;
    cout << "x is " << x << endl;   // prints "x is 57.372"

    return 0;
}