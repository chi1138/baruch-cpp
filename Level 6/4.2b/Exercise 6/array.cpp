#ifndef ARRAY_CPP
#define ARRAY_CPP

#include "array.hpp"

// Initialize static variable
template <typename T>
int Array<T>::s_defaultSize = 10;

// Default constructor
template <typename T>
Array<T>::Array() : m_size(s_defaultSize) {
    m_data = new T[m_size];
}

// Constructor with size argument
template <typename T>
Array<T>::Array(int size) : m_size(size) {
    m_data = new T[m_size];
}

// Copy constructor
template <typename T>
Array<T>::Array(const Array<T>& other) : m_size(other.m_size) {
    m_data = new T[m_size];
    for (int i = 0; i < m_size; ++i) {
        m_data[i] = other.m_data[i];
    }
}

// Destructor
template <typename T>
Array<T>::~Array() {
    delete[] m_data;
}

// Assignment operator
template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
    if (this != &other) {
        delete[] m_data;
        m_size = other.m_size;
        m_data = new T[m_size];
        for (int i = 0; i < m_size; ++i) {
            m_data[i] = other.m_data[i];
        }
    }
    return *this;
}

// Set element
template <typename T>
void Array<T>::SetElement(int index, const T& p) {
    if (index < 0 || index >= m_size) {
        throw OutOfBoundsException(index);  // Throw exception
    }
    m_data[index] = p;
}

// Get element
template <typename T>
T& Array<T>::GetElement(int index) const {
    if (index < 0 || index >= m_size) {
        throw OutOfBoundsException(index);
    }
    return m_data[index];
}

// Overloaded [] operator
template <typename T>
T& Array<T>::operator[](int index) {
    return GetElement(index);
}

template <typename T>
const T& Array<T>::operator[](int index) const {
    return GetElement(index);
}

// Get size
template <typename T>
int Array<T>::Size() const {
    return m_size;
}

// Get default size
template <typename T>
int Array<T>::DefaultSize() {
    return s_defaultSize;
}

// Set default size
template <typename T>
void Array<T>::DefaultSize(int newSize) {
    s_defaultSize = newSize;
}

#endif  
