#include "line.hpp"
#include "point.hpp"

#include <iostream>
#include <sstream>

// Constructor and destructor
Line::Line() : Shape(), startpoint(Point(0.0, 0.0)), endpoint(Point(0.0, 0.0)) {}

Line::Line(const Point& start, const Point& end) : Shape(), startpoint(start), endpoint(end) {}

Line::Line(const Line& l) : Shape(), startpoint(l.startpoint), endpoint(l.endpoint) {}

Line::~Line() {
//    std::cout << "Line destructor called" << std::endl;
}

// getter function and setter function
Point Line::Start() const {return startpoint;}
Point Line::End() const {return endpoint;}
void Line::Start(const Point &p) {startpoint = p;}
void Line::End(const Point &p) {endpoint = p;}

// Funciton to calculate the length of the line
double Line::Length() const{ return startpoint.Distance(endpoint); }

// Convert line to string
// include ToString from shape
std::string Line::ToString() const {
    std::string s = Shape::ToString();

    std::stringstream ss;
    ss << startpoint.ToString() << " to " << endpoint.ToString() << " with id: " << s;
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

// override the draw function
void Line::Draw() const {
    std::cout << "Drawing a Line from " << startpoint.ToString()
              << " to " << endpoint.ToString() << std::endl;
}