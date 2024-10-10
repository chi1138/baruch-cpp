#ifndef Circle_HPP
#define Circle_HPP

#include <iostream>
#include "point.hpp" // include header file to call point
#include "line.hpp" // include header file to call line

class Circle {
private:
    // data that contain the radius and center point
    double m_radius;
    Point m_center_point;
    
public:
    // Defualt Constructor
    Circle();
    
    // Constructor with center point and radius
    Circle(const double& radius, const Point& cp);
    
    // Copy Constructor
    Circle(const Circle& c);
    
    // Destructor
    ~Circle();
    
    // Getter functions
    double Radius() const;
    Point CenterPoint() const;
    
    // Stter functions
    void Radius(const double& radius);
    void CenterPoint(const Point& cp);

    // Convert circle description to string
    std::string ToString() const;
    
    // Functions for diameter, area, and circumference
    double Diameter() const;
    double Area() const;
    double Circumference() const;
};


#endif
