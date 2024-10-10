#include "point.hpp"

#include <iostream>
#include <sstream>

// Default Constructor
Point::Point() : x(0.0), y(0.0) {
    std::cout << "Default constructor called for Point(" << x << ", " << y << ")" << std::endl;
}

// Constructor with parameters
Point::Point(double x_coord, double y_coord) : x(x_coord), y(y_coord) {
    std::cout << "Constructor called for Point(" << x << ", " << y << ")" << std::endl;
}

// Copy Constructor
Point::Point(const Point& p) : x(p.x), y(p.y) {
    std::cout << "Copy constructor called for Point(" << x << ", " << y << ")" << std::endl;
}

// Destructor
Point::~Point() {
    std::cout << "Destructor called for Point(" << x << ", " << y << ")" << std::endl;
}

// Getter functions
double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

// Setter functions
void Point::setX(double x_coord) {
    x = x_coord;
}

void Point::setY(double y_coord) {
    y = y_coord;
}

// Calculate the distance to the origin (0,0)
double Point::DistanceOrigin() const {
    return std::sqrt((x * x) + (y * y));
}

// Calculate the distance between two points
double Point::Distance(Point p) const {
    double dx = x - p.getX();
    double dy = y - p.getY();
    return std::sqrt((dx * dx) + (dy * dy));
}

// Convert Point to a string
std::string Point::ToString() {
    std::stringstream ss;
    ss << "Point(" << x << ", " << y << ")";
    return ss.str();
}
