#ifndef STACK_HPP
#define STACK_HPP

#include "array.hpp"
#include "stack_exceptions.hpp"

template <typename T>
class Stack {
private:
    Array<T> m_array;  // Storage for stack elements
    int m_current;      // Tracks the current position

public:
    // Constructors and Destructor
    Stack();
    Stack(int size);
    Stack(const Stack<T>& other);
    ~Stack();

    // Assignment operator
    Stack<T>& operator=(const Stack<T>& other);

    // Stack operations
    void Push(const T& element);
    T Pop();
};

#ifndef STACK_CPP
#include "stack.cpp"  // Include template implementation
#endif

#endif
