#include "stack.hpp"
#include <iostream>

int main() {
    try {
        Stack<int> intStack(3);  // Create stack with size 3

        intStack.Push(10);
        intStack.Push(20);
        intStack.Push(30);

        std::cout << "Popped: " << intStack.Pop() << std::endl;
        std::cout << "Popped: " << intStack.Pop() << std::endl;

        intStack.Push(40);
        std::cout << "Popped: " << intStack.Pop() << std::endl;
        std::cout << "Popped: " << intStack.Pop() << std::endl;

        std::cout << "Popped: " << intStack.Pop() << std::endl;  // Should throw

    } catch (const StackException& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
