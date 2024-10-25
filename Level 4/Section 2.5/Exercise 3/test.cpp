#include "array.hpp"
#include "point.hpp"
#include <iostream>

int main() {
    Array arr(3); // create an array

    // set elements
    arr.SetElement(0, Point(1.0, 2.0));
    arr.SetElement(1, Point(3.0, 4.0));
    arr.SetElement(2, Point(5.0, 6.0));

    // Print the elements using the [] operator
    std::cout << "Array elements:" << std::endl;
    for (int i = 0; i < arr.Size(); ++i) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}

// we need a const version of the square bracket operator as it allows
// access to elements of the array in read-only contexts. If we have a
// const array object, we need const version of operator to access them.
