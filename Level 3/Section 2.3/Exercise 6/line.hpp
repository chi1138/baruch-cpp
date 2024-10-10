#ifndef Line_HPP
#define Line_HPP

#include <iostream>
#include "point.hpp" // include header file to call point

class Line {
private:
    Point startpoint;
    Point endpoint;
    
public:
    // Defualt Constructor
    Line();
    
    // Constructor with start- and end-point
    Line(const Point& start, const Point& end);
    
    // Copy Constructor
    Line(const Line& l);
    
    // Destructor
    ~Line();
    
    // Getter functions for start and end points
    Point Start() const;
    Point End() const;
    
    // Setter functions fort start and end points
    void Start(const Point& p);
    void End(const Point& p);
    
    // Function to calculate the length of the line
    double Length() const;
    
    // Convert line to string
    std::string ToString() const;
};


#endif
