#include "stack.hpp"
#include <iostream>

int main() {
    try {
        Stack<int, 3> intStack;  // Create a stack with size 3

        intStack.Push(10);
        intStack.Push(20);
        intStack.Push(30);

        std::cout << "Popped: " << intStack.Pop() << std::endl;
        std::cout << "Popped: " << intStack.Pop() << std::endl;

        intStack.Push(40);
        std::cout << "Popped: " << intStack.Pop() << std::endl;

        // Pop remaining element
        std::cout << "Popped: " << intStack.Pop() << std::endl;

        // Attempt to pop from an empty stack (should throw exception)
        std::cout << "Popped: " << intStack.Pop() << std::endl;
    } catch (const StackException& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
