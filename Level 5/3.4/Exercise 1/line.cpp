#include "line.hpp"
#include "point.hpp"

#include <iostream>
#include <sstream>

// Constructor and destructor
// using colon syntax
Line::Line() : startpoint(Point(0.0, 0.0)), endpoint(Point(0.0, 0.0)) {
    std::cout << "Line default constructor called" << std::endl;
}

Line::Line(const Point& start, const Point& end) : startpoint(start), endpoint(end) {
    std::cout << "Line constructor with parameter called" << std::endl;
    }

Line::Line(const Line& l) : startpoint(l.startpoint), endpoint(l.endpoint) { std::cout << "Copy constructor used" << std::endl; }

Line::~Line() {
    std::cout << "Line destructor called" << std::endl;
}

// getter function and setter function
Point Line::Start() const {return startpoint;}
Point Line::End() const {return endpoint;}
void Line::Start(const Point &p) {startpoint = p;}
void Line::End(const Point &p) {endpoint = p;}

// Funciton to calculate the length of the line
double Line::Length() const{ return startpoint.Distance(endpoint); }

// Convert line to string
std::string Line::ToString() const {
    std::stringstream ss;
    ss << startpoint.ToString() << " to " << endpoint.ToString();
    return ss.str();
}

Line& Line::operator=(const Line &source) {
    if (this == & source) return *this; // preclude self
    startpoint = source.startpoint;
    endpoint = source.endpoint;
    return *this;
}

// ostream
std::ostream& operator << (std::ostream& output, const Line& l){
    output << l.ToString();
    return output;
}
