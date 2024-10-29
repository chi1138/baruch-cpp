#ifndef STACK_CPP
#define STACK_CPP

#include "stack.hpp"

// Default constructor
template <typename T, int size>
Stack<T, size>::Stack() : m_array(size), m_current(0) {}

// Copy constructor
template <typename T, int size>
Stack<T, size>::Stack(const Stack<T, size>& other)
    : m_array(other.m_array), m_current(other.m_current) {}

// Destructor
template <typename T, int size>
Stack<T, size>::~Stack() {}

// Assignment operator
template <typename T, int size>
Stack<T, size>& Stack<T, size>::operator=(const Stack<T, size>& other) {
    if (this != &other) {
        m_array = other.m_array;
        m_current = other.m_current;
    }
    return *this;
}

// Push element onto the stack
template <typename T, int size>
void Stack<T, size>::Push(const T& element) {
    try {
        m_array.SetElement(m_current, element);
        ++m_current;
    } catch (...) {  // Catch any exception (e.g., OutOfBoundsException)
        throw StackFullException();  // Translate to StackFullException
    }
}

// Pop element from the stack
template <typename T, int size>
T Stack<T, size>::Pop() {
    try {
        --m_current;
        return m_array.GetElement(m_current);
    } catch (...) {  // Catch any exception (e.g., OutOfBoundsException)
        throw StackEmptyException();  // Translate to StackEmptyException
    }
}

#endif
