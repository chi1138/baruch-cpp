#include "array.hpp"
#include <iostream>

// Constructors and destructors
Array::Array(): m_size(10){m_data = new Point[m_size];} // default constructor
Array::Array(int size) : m_size(size) {m_data = new Point[m_size];}
//Copy constructor
Array::Array(const Array& other) : m_size(other.m_size) {
    m_data = new Point[m_size];
    for (int i = 0; i < m_size; ++i) {
        m_data[i] = other.m_data[i];  // Copy elements from the original array
    }
}
Array::~Array(){ delete [] m_data; }

// Assignment operator
Array& Array::operator = (const Array& other) {
    if (this == &other) return *this;  // Check for self-assignment

    delete[] m_data;

    m_size = other.m_size;
    m_data = new Point[m_size];  // Allocate new memory
    
    for (int i = 0; i < m_size; ++i) {
        m_data[i] = other.m_data[i];
    }
    return *this;
}

// get size
int Array::Size() const { return m_size; }

// set element in array
void Array::SetElement(int index, const Point& p) {
    if (index < 0 || index >= m_size) {
        throw OutOfBoundsException(index);  // Out of bounds exception
    }
    m_data[index] = p;
}

// Get an element with bounds checking
Point& Array::GetElement(int index) {
    if (index < 0 || index >= m_size) {
        throw OutOfBoundsException(index);  // Out of bounds exception
    }
    return m_data[index];
}

// Overloaded [] operator
Point& Array::operator[](int index) {
    if (index < 0 || index >= m_size) {
        throw OutOfBoundsException(index);  // Out of bounds exception
    }
    return m_data[index];
}


// Overloaded [] operator (const version)
const Point& Array::operator[](int index) const {
    if (index < 0 || index >= m_size) {
        throw -1;  // Out of bounds exception
    }
    return m_data[index];
}