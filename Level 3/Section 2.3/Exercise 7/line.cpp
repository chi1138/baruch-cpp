#include "line.hpp"
#include "point.hpp"

#include <iostream>
#include <sstream>

// Use default constructor to set point to (0.0, 0.0)
Line::Line() : startpoint(Point(0.0, 0.0)), endpoint(Point(0.0, 0.0)) {}

// constructor with start and end point
Line::Line(const Point& start, const Point& end) : startpoint(start), endpoint(end) {}

// Copy constructor
Line::Line(const Line& l) : startpoint(l.startpoint), endpoint(l.endpoint) {
    std::cout << "Copy constructor used" << std::endl;
}

// Destructor
Line::~Line() {}

// Getter function for start and end point
// Note we overload the functions Start and End
Point Line::Start() const {return startpoint;}
Point Line::End() const {return endpoint;}

// Setter function for start and end points
void Line::Start(const Point &p) {startpoint = p;}
void Line::End(const Point &p) {endpoint = p;}

// Funciton to calculate the length of the line
// Using the "delegation"
double Line::Length() const{
    return startpoint.Distance(endpoint);
}

// Convert line to string
std::string Line::ToString() const {
    std::stringstream ss;
    ss << "Line showed using ToString: from " << startpoint.ToString() << " to " << endpoint.ToString();
    return ss.str();
}
