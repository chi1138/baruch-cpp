#ifndef Circle_HPP
#define Circle_HPP

#include <iostream>
#include "point.hpp" // include header file to call point
#include "line.hpp" // include header file to call line
#include "shape.hpp"

class Circle : public Shape {
private:
    // data that contain the radius and center point
    double m_radius;
    Point m_center_point;
    
public:
    // Constructors and destructor
    Circle(); // Default Contructor
    Circle(const double& radius, const Point& cp); // Constructor with center point and radius
    Circle(const Circle& c); // Copy Constructor
    ~Circle();
    
    // Getter and setter functions
    double Radius() const;
    Point CenterPoint() const;
    void Radius(const double& radius);
    void CenterPoint(const Point& cp);

    // Convert circle description to string
    std::string ToString() const;
    
    // Functions for diameter, area, and circumference
    double Diameter() const;
    double Area() const;
    double Circumference() const;
    
    Circle& operator = (const Circle& source);
    
    void Draw() const override;
};

std::ostream& operator << (std::ostream& output, const Circle& c);



#endif
