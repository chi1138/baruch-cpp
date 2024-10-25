#include "point.hpp"

#include <iostream>
#include <sstream>

// Construtors and destructor
Point::Point() : x(0.0), y(0.0) {}
Point::Point(double x_coord, double y_coord) : x(x_coord), y(y_coord) {}
Point::Point(const Point& p) : x(p.x), y(p.y) {}
Point::~Point() {}

// Getter and setter functions
double Point::X() const { return x; }
double Point::Y() const { return y; }
void Point::X(double x_coord) { x = x_coord; }
void Point::Y(double y_coord) { y = y_coord; }

// Distance functions
double Point::Distance() const { return std::sqrt((x * x) + (y * y)); }
double Point::Distance(const Point& p) const {
    double dx = x - p.X();
    double dy = y - p.Y();
    return std::sqrt((dx * dx) + (dy * dy));
}

// Convert Point to a string
std::string Point::ToString() const {
    std::stringstream ss;
    ss << "Point(" << x << ", " << y << ")";
    return ss.str();
}

// Operator Overloading
Point Point::operator - () const{ return Point(-x,-y); } // Negate the coordinates
Point Point::operator * (double factor) const { return  Point(x * factor, y * factor); } // Scale coordinates
Point Point::operator + (const Point &p) const { return Point(x + p.x, y + p.y); } // Add coordinates
bool Point::operator == (const Point &p) const { return (x == p.x) && (y == p.y) ;} // Equally compare operator
// Assignment Operator
Point& Point::operator = (const Point &source) {
    if (this == &source) return *this;
    // returning current object
    x = source.x;
    y = source.y;
    
    return *this;
}
// Scale coordinates & assign
Point& Point::operator *= (double factor) {
    x *= factor;
    y *= factor;
    
    return *this;
}
