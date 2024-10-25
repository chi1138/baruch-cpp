#include "point.hpp"

#include <iostream>
#include <sstream>

// Construtors and destructor
// Apply colon sytax for constructors
Point::Point() : x(0.0), y(0.0) {
    std::cout << "Default point constructor called" << std::endl;
}
Point::Point(double x_coord, double y_coord) : x(x_coord), y(y_coord) {
    std::cout << "Point constructor with parameters called" << std::endl;
}
Point::Point(const Point& p) : x(p.x), y(p.y) {
    std::cout << "Point copy constructor called" << std::endl;
}
Point::~Point() {
    std::cout << "Point destructor called" << std::endl;
}

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

// Assignment Operator with colon syntax
Point& Point::operator = (const Point &p) {
    if (this == &p) return *this;
    x = p.x;
    y = p.y;
    std::cout << "Point assignment operator called" << std::endl;
    return *this;
}
// Scale coordinates & assign
Point& Point::operator *= (double factor) {
    x *= factor;
    y *= factor;
    
    return *this;
}

//ostream << operator
std::ostream& operator << (std::ostream& output, const Point& p){
    output << p.ToString();
    return output;
}
