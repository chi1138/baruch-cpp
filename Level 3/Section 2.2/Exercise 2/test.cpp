#include "point.hpp"
#include <iostream>

int main() {
    double x, y;

    // request x and y input
    std::cout << "Enter the x-coordinate: " << std::endl;
    std::cin >> x;
    std::cout << "Enter the y-coordinate: " << std::endl;
    std::cin >> y;

    // create point using constructor
    Point point(x,y);

    // set using the setter functions
    point.setX(x);
    point.setY(y);

    std::cout << "Description of the point using ToString(): " << point.ToString() << std::endl;
    std::cout << "Description of x-coordinate using getX(): " << point.getX() << std::endl;
    std::cout << "Description of y-coordinate using getY(): " << point.getY() << std::endl;

    std::cout << "Distance to the origin is: " << point.DistanceOrigin() << std::endl;
    
    Point p2(2.3, 4.5);
    
    std::cout << "Distance between the point and point p2 is: " << point.Distance(p2) << std::endl;
    
    return 0;
}
