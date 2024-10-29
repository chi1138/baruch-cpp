#ifndef STACK_HPP
#define STACK_HPP

#include "array.hpp"

template <typename T>
class Stack {
private:
    Array<T> m_array; // Using the Array<T> to store elements
    int m_current;    // Tracks the current index for the stack

public:
    // Constructors and Destructor
    Stack();                // Default constructor
    Stack(int size);        // Constructor with size
    Stack(const Stack<T>& other); // Copy constructor
    ~Stack();               // Destructor

    // Assignment operator
    Stack<T>& operator=(const Stack<T>& other);

    // Stack operations
    void Push(const T& element); // Push an element onto the stack
    T Pop();                     // Pop an element from the stack
};

#ifndef STACK_CPP
#include "stack.cpp"  // Include implementation here
#endif

#endif
