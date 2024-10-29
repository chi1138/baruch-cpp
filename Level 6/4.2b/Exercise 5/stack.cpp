#ifndef STACK_CPP
#define STACK_CPP

#include "stack.hpp"

// Default constructor
template <typename T>
Stack<T>::Stack() : m_array(10), m_current(0) {}

// Constructor with size argument
template <typename T>
Stack<T>::Stack(int size) : m_array(size), m_current(0) {}

// Copy constructor
template <typename T>
Stack<T>::Stack(const Stack<T>& other)
    : m_array(other.m_array), m_current(other.m_current) {}

// Destructor
template <typename T>
Stack<T>::~Stack() {}

// Assignment operator
template <typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& other) {
    if (this != &other) {
        m_array = other.m_array;
        m_current = other.m_current;
    }
    return *this;
}

// Push element onto the stack
template <typename T>
void Stack<T>::Push(const T& element) {
    try {
        m_array.SetElement(m_current, element);
        ++m_current;
    } catch (const OutOfBoundsException&) {
        throw StackFullException();
    }
}

// Pop element from the stack
template <typename T>
T Stack<T>::Pop() {
    try {
        --m_current;
        return m_array.GetElement(m_current);
    } catch (const OutOfBoundsException&) {
        throw StackEmptyException();
    }
}

#endif
