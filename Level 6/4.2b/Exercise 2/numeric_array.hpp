#ifndef NUMERIC_ARRAY_HPP
#define NUMERIC_ARRAY_HPP

#include "array.hpp"

template <typename T>
class NumericArray : public Array<T> {
public:
    // Constructors and destructor
    NumericArray(); // Default constructor
    NumericArray(int size); // Constructor with size
    NumericArray(const NumericArray<T>& other); // Copy constructor
    ~NumericArray(); // destructor

    // Assignment operator
    NumericArray<T>& operator=(const NumericArray<T>& other);

    // Operator overloading for numeric operations
    NumericArray<T> operator+(const NumericArray<T>& other) const;
    NumericArray<T> operator*(T factor) const;

    // Dot product function
    T DotProduct(const NumericArray<T>& other) const;
};

#ifndef NUMERIC_ARRAY
#include "numeric_array.cpp"
#endif

#endif
