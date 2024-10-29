#ifndef NUMERIC_ARRAY
#define NUMERIC_ARRAY
#include "numeric_array.hpp"

// default constructor
template <typename T>
NumericArray<T>::NumericArray() : Array<T>() {}

// constructor with size
template <typename T>
NumericArray<T>::NumericArray(int size) : Array<T>(size) {}

//copy constructor
template <typename T>
NumericArray<T>:: NumericArray(const NumericArray<T>& other) : Array<T>(other) {}

// destructor
template <typename T>
NumericArray<T>::~NumericArray() {}

// Assignment operator
template <typename T>
NumericArray<T>& NumericArray<T>::operator=(const NumericArray<T>& other) {
    if (this == &other) return *this; // Check for self-assignment
    Array<T>::operator=(other); // Call base class assignment operator
    return *this;
}

// overload + operator
template <typename T>
NumericArray<T> NumericArray<T>::operator + (const NumericArray<T>& other) const {
    NumericArray<T> result(this->Size());
    for (int i = 0; i < this -> Size(); ++i) {
        result[i] = (*this)[i] + other[i];
    }
    return result;
}

// overload * operator
template <typename T>
NumericArray<T> NumericArray<T>::operator * (T factor) const {
    NumericArray<T> result(this->Size());
    for (int i = 0; i < this -> Size(); ++i) {
        result[i] = (*this)[i] * factor;
    }
    return result;
}

// dot product
template <typename T>
T NumericArray<T>::DotProduct(const NumericArray<T>& other) const {
    T result = 0;
    for (int i = 0; i < this->Size(); ++i) {
        result += (*this)[i] * other[i];
    }
    return result;
}

#endif
