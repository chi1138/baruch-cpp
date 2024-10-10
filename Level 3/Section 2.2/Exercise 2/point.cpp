#include "point.hpp"

#include <iostream>
#include <sstream>

// Initializes x and y with provided values or default (0.0) 
Point::Point(double x_coord, double y_coord) : x(x_coord), y(y_coord){}

// Destructor
Point::~Point()
{}

// Getter functions
double Point::getX() const { return x; }
double Point::getY() const { return y; }

// Setter functions
void Point::setX(double x_coord){ x = x_coord; }
void Point::setY(double y_coord){ y = y_coord; }

double Point::DistanceOrigin() const {
    return std::sqrt((x*x) + (y*y));
}
double Point::Distance(Point p) const {
    double dx = x - p.getX();
    double dy = y - p.getY();
    return std::sqrt((dx*dx) + (dy*dy));
}

// convert Point to a string
std::string Point::ToString(){
    std::stringstream ss;
    ss << "Point(" << x << ", " << y << ")";
    return ss.str();
}
