#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <stdlib.h>
#include <iostream>

class Shape {
private:
    int m_id;
    
public:
    //defualt constructor
    Shape();
    
    // copy constructor
    Shape(const Shape& other);
    
    // assignment operator
    Shape& operator = (const Shape& other);
    
    // destructor
    ~Shape();
    
    // getter for ID
    int ID() const;
    
    // ToString function
    std::string ToString() const;
};


#endif