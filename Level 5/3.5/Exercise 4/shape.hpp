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
    
    // make sure we use virtual destructor
    virtual ~Shape();
    
    // getter for ID
    int ID() const;
    
    // ToString function
    virtual std::string ToString() const;
    
    // Pure virtual Draw function (makes Shape an abstract class)
    virtual void Draw() const = 0;
};


#endif
