#include "point.hpp"
#include "line.hpp"
#include "circle.hpp"
#include <iostream>

using namespace std;

int main() {
    // Create a Point and Line object
    Point p(10.0, 20.0);
    Line l(Point(1.0, 2.0), Point(3.0, 4.0));
    Circle c(0.5, Point(12.3, 39.0));

    // Call the Print function from the base class
    p.Print();
    l.Print();
    c.Print();
    
    // the output prints the informations for point, line, and circle.

    return 0;
}
