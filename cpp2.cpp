// to compile: use g++ instead of gcc
// files end with .cpp

#include <iostream>
using namespace std;

void func1(int);
void func2(int *);
void func3(int &); // C++ method of pass by reference

int main()
{
    int n = 45;
    cout << n << endl; // prints "45"
    func1(n);
    cout << n << endl; // prints "45" -passing by value so doesnt change

    // C way of pass by reference
    func2(&n);
    cout << n << endl;  // prints "77"  -passing by reference


    // C++ way of pass by reference - details are hidden in main for C++ so you tell by prototype
    func3(n);
    cout << n << endl;  // prints 88

    return 0;
}

void func1(int n)
{
    n = 33;
}

void func2(int *p)
{
    *p = 77;
}

void fund3(int &n)
{
    n = 88;
}