#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "point.hpp"

class Array {
private:
    Point* m_data; //data member for a dynamic C array of Point objects
    int m_size; // data member for the size of the array.
    
public:
    //Constructors and destrcotor
    Array(); // defualt constructor
    Array(int size); // constructor with a size argument
    Array(const Array& other); // copy constructor
    ~Array(); //destructor
    
    // assignment operator
    Array& operator = (const Array& other);
    
    // Getter
    int Size() const;
    void SetElement(int index, const Point& p); // sets an element
    Point& GetElement(int index); // get element

    Point& operator [] (int indez); // square bracket operator
    const Point& operator [] (int index) const; // const sqaure bracket operator
};

#endif
