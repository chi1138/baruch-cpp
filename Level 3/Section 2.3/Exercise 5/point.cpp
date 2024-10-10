#include "point.hpp"

#include <iostream>
#include <sstream>

// Default Constructor
Point::Point() : x(0.0), y(0.0) {}

// Constructor with parameters
Point::Point(double x_coord, double y_coord) : x(x_coord), y(y_coord) {}

// Copy Constructor
Point::Point(const Point& p) : x(p.x), y(p.y) {}

// Destructor
Point::~Point() {}

// Getter functions
double Point::X() const {
    return x;
}

double Point::Y() const {
    return y;
}

// Setter functions
void Point::X(double x_coord) {
    x = x_coord;
}

void Point::Y(double y_coord) {
    y = y_coord;
}

// Calculate the distance to the origin (0,0)
// I have already set the Distance function to const in the previous exercises
double Point::Distance() const {
    return std::sqrt((x * x) + (y * y));
}

// Calculate the distance between two points using const reference
// I have already set the Distance function to const in the previous exercises
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
