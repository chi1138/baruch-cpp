#include "array.hpp"
#include <iostream>
using namespace std;

int main() {
    Array<int> intArray1;
    Array<int> intArray2;
    Array<double> doubleArray;

    cout << intArray1.DefaultSize() << endl; // Output: 10
    cout << intArray2.DefaultSize() << endl; // Output: 10
    cout << doubleArray.DefaultSize() << endl; // Output: 10

    intArray1.DefaultSize(15); // Change default size

    cout << intArray1.DefaultSize() << endl; // Output: 15
    cout << intArray2.DefaultSize() << endl; // Output: 15
    cout << doubleArray.DefaultSize() << endl; // Output: 10
    
    // the reason that the size for doubleArray hasn't change
    // is all Array<int> instances share the same s_defaultSize
    // however, Array<double>'s default size hasn't been modified
    
    doubleArray.DefaultSize(20);
    
    cout << doubleArray.DefaultSize() << endl; // Output: 20
    // after modifying the default size to 20 we can see the
    // size for Array<double> is now 20

    return 0;
}
