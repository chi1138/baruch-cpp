#include "array.hpp"
#include <iostream>

int main() {
    try {
        Array arr(5);  // Create an array of size 5

        // Access an element within bounds
        arr.SetElement(2, Point(1.0, 2.0));
        std::cout << "Element at index 2: " << arr.GetElement(2).ToString() << std::endl;

        // Attempt to access an element out of bounds
        arr.SetElement(6, Point(1.2, 3.0)); // This will throw an exception
        arr.GetElement(10);  // This will also throw an exception

    } catch (int e) {
        std::cerr << "Error: Array index out of bounds!" << std::endl;
    }

    return 0;
}
