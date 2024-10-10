#include "point.hpp"

#include <iostream>
#include <sstream>

// Initializes x and y with provided values or default (0.0) 
Point::Point(double x_coord, double y_coord) : x(x_coord), y(y_coord){
    std::cout << "Point constructed: " << ToString() << std::endl;
}

// Destructor
Point::~Point()
{
    std::cout << "Point destructed: " <<ToString() << std::endl;
}

// Getter functions
double Point::getX() const { return x; }
double Point::getY() const { return y; }

// Setter functions
void Point::setX(double x_coord){ x = x_coord; }
void Point::setY(double y_coord){ y = y_coord; }

// convert Point to a string
std::string Point::ToString(){
    std::stringstream ss;
    ss << "Point(" << x << ", " << y << ")";
    return ss.str();
}
