// to compile: use g++ instead of gcc
// files end with .cpp

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {33, 56,42, 75, 91};
    int size = sizeof(arr)/sizeof(int);

    // c index-based for loop
    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;

    cout << "--------------\n";

    // c++ range-based for loop
    for (int n: arr)
        cout << n << endl;

    char line[] = "beat sotuh carolina";
    for (char c: line)
        cout << c << endl;  // prints one letter at a time
    
    return 0;
}
