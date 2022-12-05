// to compile: use g++ instead of gcc
// files end with .cpp

#include <iostream>
using namespace std;
// can use C libraries but use new naming convention
// find on cplusplus.com
// ex: stdio.h == <cstdio> then you can use printf

void swap_c(int *, int *);
void swap_cpp(int &, int &);

int main()
{
    int a = 5, b = 8;

    // c method
    cout << a << " " << b << endl;
    swap_c(&a, &b);
    cout << a << " " << b << endl;

    // c++ method
    a = 12, b = 17;
    cout << a << " " << b << endl;
    swap_cpp(a, b);
    cout << a << " " << b << endl;


    return 0;
}

void swap_c(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swap_cpp(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}