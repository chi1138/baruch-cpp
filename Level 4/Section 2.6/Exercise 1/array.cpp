#include "array.hpp"
#include <iostream>

namespace YuChiWang {
    namespace Containers {

        // Constructors and destructors
        Array::Array(): m_size(10){m_data = new CAD::Point[m_size];} // default constructor
        Array::Array(int size) : m_size(size) {m_data = new CAD::Point[m_size];}
        //Copy constructor
        Array::Array(const Array& other) : m_size(other.m_size) {
            m_data = new CAD::Point[m_size];
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
            m_data = new CAD::Point[m_size];  // Allocate new memory
            
            for (int i = 0; i < m_size; ++i) {
                m_data[i] = other.m_data[i];
            }
            return *this;
        }

        // get size
        int Array::Size() const { return m_size; }

        // set element in array
        void Array::SetElement(int index, const CAD::Point& p) {
            if (index >= 0 && index < m_size) {
                m_data[index] = p;
            }
        }

        // Get an element by reference
        CAD::Point& Array::GetElement(int index) {
            if (index >= 0 && index < m_size) {
                return m_data[index];
            }
            return m_data[0];  // return first element if out of bounds
        }

        // Overloaded [] operator
        CAD::Point& Array::operator[](int index) {
            if (index >= 0 && index < m_size) {
                return m_data[index];
            }
            return m_data[0];  // return first element if out of bounds
        }

        // Overloaded [] operator (const version)
        const CAD::Point& Array::operator[](int index) const {
            if (index >= 0 && index < m_size) {
                return m_data[index];
            }
            return m_data[0];  // return first element if out of bounds
        }

    }
}
