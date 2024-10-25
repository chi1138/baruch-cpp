#ifndef _USE_MATH_DEFINES    // For PI
#define _USE_MATH_DEFINES

#include "circle.hpp"
#include <cmath>   // For PI
#include <iostream> // For converting to string

// Constructor and Destructor
Circle::Circle() : m_radius(1.0), m_center_point(Point(0.0, 0.0)) {std::cout << "Circle created with radius 1 created." << std::endl;}
Circle::Circle(const double& radius, const Point& cp) : m_radius(radius), m_center_point(cp) {}
Circle::Circle(const Circle& c) : m_radius(c.m_radius), m_center_point(c.m_center_point) {}
Circle::~Circle() {}

// Getter and setter functions
double Circle::Radius() const { return m_radius; }
Point Circle::CenterPoint() const { return m_center_point; }
void Circle::Radius(const double& radius) { m_radius = radius; }
void Circle::CenterPoint(const Point& cp) { m_center_point = cp; }

// Convert circle description to string
std::string Circle::ToString() const {
    std::stringstream ss;
    ss << "Circle with radius " << m_radius << " and center at " << m_center_point.ToString();
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

#endif
