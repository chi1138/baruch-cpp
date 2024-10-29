#ifndef _USE_MATH_DEFINES    // For PI
#define _USE_MATH_DEFINES

#include "circle.hpp"
#include <cmath>   // For PI
#include <iostream> // For converting to string

// Constructor and Destructor
Circle::Circle() : Shape(), m_radius(1.0), m_center_point(Point(0.0, 0.0)) {}
Circle::Circle(const double& radius, const Point& cp) : Shape(), m_radius(radius), m_center_point(cp) {}
Circle::Circle(const Circle& c) : Shape(), m_radius(c.m_radius), m_center_point(c.m_center_point) {}
Circle::~Circle() {}

// Getter and setter functions
double Circle::Radius() const { return m_radius; }
Point Circle::CenterPoint() const { return m_center_point; }
void Circle::Radius(const double& radius) { m_radius = radius; }
void Circle::CenterPoint(const Point& cp) { m_center_point = cp; }

// Convert circle description to string
// include ToString from shape
std::string Circle::ToString() const {
    std::string s = Shape::ToString();
    
    std::stringstream ss;
    ss << "Circle with radius " << m_radius << " and center at " << m_center_point.ToString()
    << " with id: " << Shape::ToString();
    return ss.str();
}

// Calculate diameter, area, and circumference
double Circle::Diameter() const { return 2 * m_radius; }
double Circle::Area() const { return M_PI * m_radius * m_radius; }
double Circle::Circumference() const { return 2 * M_PI * m_radius; }

// assign operator
Circle& Circle::operator=(const Circle &source){
    if (this == & source) return *this;
    m_radius = source.m_radius;
    m_center_point = source.m_center_point;
    return *this;
}

//ostream << operator
std::ostream& operator << (std::ostream& output, const Circle& c){
    output << c.ToString();
    return output;
}

void Circle::Draw() const {
    std::cout << "Drawing a Circle with radius " << m_radius
              << " and center at " << m_center_point.ToString() << std::endl;
}

#endif
