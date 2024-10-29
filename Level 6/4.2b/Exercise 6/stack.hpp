#ifndef STACK_HPP
#define STACK_HPP

#include "array.hpp"
#include "stack_exceptions.hpp"

template <typename T, int size>
class Stack {
private:
    Array<T> m_array;  // Using Array<T> for data storage
    int m_current;      // Tracks the current index for the stack

public:
    // Constructors and Destructor
    Stack();
    Stack(const Stack<T, size>& other);
    ~Stack();

    // Assignment operator
    Stack<T, size>& operator=(const Stack<T, size>& other);

    // Stack operations
    void Push(const T& element);  // Push element
    T Pop();  // Pop element
};

#ifndef STACK_CPP
#include "stack.cpp"  // Include the implementation
#endif

#endif
