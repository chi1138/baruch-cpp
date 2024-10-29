#ifndef ARRAY_CPP
#define ARRAY_CPP

#include "array.hpp"
#include <iostream>

// initialize the static default size
template <typename T>
int Array<T>::s_defaultSize = 10;

// Defualt constructor
template <typename T>
Array<T>::Array(): m_size(s_defaultSize){m_data = new T[m_size];}

// Constructor with size
template <typename T>
Array<T>::Array(int size) : m_size(size) {m_data = new T[m_size];}

//Copy constructor
template <typename T>
Array<T>::Array(const Array<T>& other) : m_size(other.m_size) {
    m_data = new T[m_size];
    for (int i = 0; i < m_size; ++i) {
        m_data[i] = other.m_data[i];  // Copy elements from the original array
    }
}

// Destructor
template <typename T>
Array<T>::~Array(){ delete [] m_data; }

// Assignment operator
template <typename T>
Array<T>& Array<T>::operator = (const Array<T>& other) {
    if (this == &other) return *this;  // Check for self-assignment
    delete[] m_data;

    m_size = other.m_size;
    m_data = new T[m_size];  // Allocate new memory
    
    for (int i = 0; i < m_size; ++i) {
        m_data[i] = other.m_data[i];
    }
    return *this;
}

// Get an element by reference
template <typename T>
T& Array<T>::GetElement(int index) {
    if (index >= 0 && index < m_size) {
        return m_data[index];
    }
    return m_data[0];  // return first element if out of bounds
}

// Overloaded [] operator
template <typename T>
T& Array<T>::operator[](int index) {
    if (index >= 0 && index < m_size) {
        return m_data[index];
    }
    return m_data[0];  // return first element if out of bounds
}

// Overloaded [] operator (const version)
template <typename T>
const T& Array<T>::operator[](int index) const {
    if (index >= 0 && index < m_size) {
        return m_data[index];
    }
    return m_data[0];  // return first element if out of bounds
}

// set element in array
template <typename T>
void Array<T>::SetElement(int index, const T& p) {
    if (index >= 0 && index < m_size) {
        m_data[index] = p;
    }
}

// Static function to get the default size
template <typename T>
int Array<T>::DefaultSize() {
    return s_defaultSize;
}

// Static function to set the default size
template <typename T>
void Array<T>::DefaultSize(int newSize) {
    s_defaultSize = newSize;
}

#endif
