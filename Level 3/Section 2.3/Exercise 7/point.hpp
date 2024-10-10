// we modify this file to make getter and setter functions inline

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

    // We use the idea of function overloading here.
    // If functions take different input, we can overload them.
    // We name both the setter function and getter function as X and Y
    // we name both distance function as Distance
    
    // Inline Getter functions (inside declaration)
    inline double X() const;
    inline double Y() const;

    // Setter functions
    void X(double x_coord);
    void Y(double y_coord);

    // Calculate the distance to the origin (0,0)
    double Distance() const;
    
    // Calculate the distance between two points
    // We now pass as a reference for exercise 2
    double Distance(const Point& p) const;
    
    std::string ToString() const;

};

// Inline Getter functions
inline double Point::X() const { return x; }

inline double Point::Y() const { return y; }

#endif
