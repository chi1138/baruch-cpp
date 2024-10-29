#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array {
private:
    T* m_data; // array of type T
    int m_size; // size of array
    
public:
    //Constructors and destrcotor
    Array(); // defualt constructor
    Array(int size); // constructor with a size argument
    Array(const Array<T>& other); // copy constructor
    ~Array(); //destructor
    
    // Operator overloading
    Array<T>& operator = (const Array<T>& other); // Assignment operator
    T& operator[](int index); // Indexing operator
    const T& operator[] (int index) const; // const square bracket operator
    
    void SetElement(int index, const T& p); // sets an element
    T& GetElement(int index); // get element
    
    int Size() const; // get size of array
};

#ifndef ARRAY_CPP // must be the same as in the source file
#include "array.cpp"
#endif

#endif
