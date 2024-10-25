#ifndef Point_HPP
#define Point_HPP

#include "shape.hpp"
#include <iostream>
#include <sstream>


// derive Point from Shape
class Point : public Shape {
private:
    double x, y; // x-coordinate and y-coordinate

public:
    // Constructors and destructors
    Point();     // Defaut Constructor
    Point(double x_coord, double y_coord); // Constructor
    Point(const Point& p);  // Copy Constructor
    ~Point();
    
    // Getter and Setter functions
    double X() const;
    double Y() const;
    void X(double x_coord);
    void Y(double y_coord);

    // Distance functions
    double Distance() const;
    double Distance(const Point& p) const;
    
    std::string ToString() const;

    // Operator overloading functions
    Point operator - () const;               // Negate the coordinates.
    Point operator * (double factor) const;  // Scale the coordinates.
    Point operator + (const Point& p) const; // Add coordinates.
    bool operator == (const Point& p) const; // Equally compare operator.
    Point& operator = (const Point& source); // Assignment operator.
    Point& operator *= (double factor);      // Scale the coordinates & assign.

    //ostream << operator as friend
    friend std::ostream& operator << (std::ostream& os, const Point& p);
    
    // override the Draw function
    void Draw() const override;
};


#endif
