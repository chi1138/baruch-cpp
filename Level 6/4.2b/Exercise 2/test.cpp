#include "numeric_array.hpp"
#include <iostream>

using namespace std;

int main() {
    // Create numeric arrays of integers
    NumericArray<int> intArray1(3);
    NumericArray<int> intArray2(3);

    // Initialize the arrays
    intArray1[0] = 1; intArray1[1] = 2; intArray1[2] = 3;
    intArray2[0] = 4; intArray2[1] = 5; intArray2[2] = 6;

    // Test addition
    NumericArray<int> intArraySum = intArray1 + intArray2;
    cout << "Sum: ";
    for (int i = 0; i < intArraySum.Size(); ++i) {
        cout << intArraySum[i] << " ";
    }
    cout << endl;

    // Test scaling
    NumericArray<int> intArrayScaled = intArray1 * 2;
    cout << "Scaled array1 with size 2: ";
    for (int i = 0; i < intArrayScaled.Size(); ++i) {
        cout << intArrayScaled[i] << " ";
    }
    cout << endl;

    // Test dot product
    int dotProduct = intArray1.DotProduct(intArray2);
    cout << "Dot Product: " << dotProduct << endl;

    return 0;
}

// What assumptions do you make about the type used as template argument?
// When arithmetic operations are required, the type most support these operators

// Can you create a numeric array with Point objects?
// Yes, you can create a numeric array with Point objects
