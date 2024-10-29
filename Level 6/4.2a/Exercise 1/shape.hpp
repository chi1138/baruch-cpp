#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <stdlib.h>
#include <iostream>

class Shape {
private:
    int m_id;
    
public:
    // constructor, destructor, and assignment operator
    Shape();
    Shape(const Shape& other);
    Shape& operator = (const Shape& other);
    virtual ~Shape();
    
    // getter function and to string
    int ID() const;
    virtual std::string ToString() const;
    
    // Pure virtual Draw function
    virtual void Draw() const = 0;
    
    // Print function 
    void Print() const;
};


#endif
