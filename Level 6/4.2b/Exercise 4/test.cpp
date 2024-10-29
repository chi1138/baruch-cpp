#include "stack.hpp"
#include <iostream>
using namespace std;

int main() {
    Stack<int> intStack(5);  // Create a stack of integers with size 5

    // Push elements onto the stack
    intStack.Push(15);
    intStack.Push(22);
    intStack.Push(33);

    // Pop elements from the stack
    cout << "Popped: " << intStack.Pop() << endl; // pop 33
    cout << "Popped: " << intStack.Pop() << endl; // pop 22

    // Push another element
    intStack.Push(46);

    cout << "Popped: " << intStack.Pop() << endl; // pop 46
    cout << "Popped: " << intStack.Pop() << endl; // pop 15

    // Attempt to pop from an empty stack
    cout << "Popped: " << intStack.Pop() << endl;

    return 0;
}
