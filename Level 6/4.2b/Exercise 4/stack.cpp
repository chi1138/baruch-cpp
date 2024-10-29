#ifndef STACK_CPP
#define STACK_CPP

#include "stack.hpp"
#include <iostream>
#include <cstdlib>  // For exit()

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
    if (m_current >= m_array.Size()) {
        std::cout << "Error: Stack overflow." << std::endl;
        exit(EXIT_FAILURE);  // Exit the program on overflow
    }
    m_array[m_current++] = element;
}

// Pop element from the stack
template <typename T>
T Stack<T>::Pop() {
    if (m_current == 0) {
        std::cout << "Error: Stack underflow." << std::endl;
        exit(EXIT_FAILURE);  // Exit the program on underflow
    }
    return m_array[--m_current];
}

#endif
