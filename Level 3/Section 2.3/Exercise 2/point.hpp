#ifndef Point_HPP
#define Point_HPP

#include <iostream>
#include <sstream>

class Point {
private:
    double x, y; // x-coordinate and y-coordinate

public:
    // Default Constructor
    Point();
    // Constructor setting defualt x and y to 0.0
    Point(double x_coord = 0.0, double y_coord = 0.0);
    // Copy Constructor
    Point(const Point& p);
    
    // Destructor
    ~Point();

    // Getter functions
    double getX() const;
    double getY() const;

    // Setter functions
    void setX(double x_coord);
    void setY(double y_coord);

    // Calculate the distance to the origin (0,0)
    double DistanceOrigin() const;
    
    // Calculate the distance between two points
    // We now pass as a reference for exercise 2
    double Distance(const Point& p) const;
    
    std::string ToString();

};


#endif
