#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "array_exceptions.hpp"  // Ensure exceptions are included

template <typename T>
class Array {
private:
    T* m_data;  // Array of type T
    int m_size;  // Size of the array
    static int s_defaultSize;  // Static default size

public:
    // Constructors and Destructor
    Array();
    Array(int size);
    Array(const Array<T>& other);
    ~Array();

    // Operator overloading
    Array<T>& operator=(const Array<T>& other);
    T& operator[](int index);
    const T& operator[](int index) const;

    // Member functions
    void SetElement(int index, const T& p);
    T& GetElement(int index) const;
    int Size() const;

    // Static functions
    static int DefaultSize();
    static void DefaultSize(int newSize);
};


#ifndef ARRAY_CPP // must be the same as in the source file
#include "array.cpp"
#endif

#endif
