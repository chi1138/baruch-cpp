#ifndef Point_HPP
#define Point_HPP

#include <iostream>
#include <sstream>

class Point {
private:
    double x, y; // x-coordinate and y-coordinate

public:
    // Constructors and destructors
    Point();     // Defaut Constructor
    Point(double x_coord, double y_coord); // Constructor
    Point(const Point& p);  // Copy Constructor
    ~Point();
    
    // add a constructor accepting one double
    // Point(double value);
    explicit Point(double value);
    
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

    
};

//ostream << operator
std::ostream& operator << (std::ostream& os, const Point& p);


#endif
