#include "point.hpp"
#include <iostream>

int main(){
    double x1, x2, y1, y2;
    
    // Request x and y input for the first point
    std::cout << "Enter the x coordinate for the first point:";
    std::cin >> x1;
    std::cout << "Enter the y coordinate for the first point:";
    std::cin >> y1;
    
    // Request x and y input for the first point
    std::cout << "Enter the x coordinate for the second point:";
    std::cin >> x2;
    std::cout << "Enter the y coordinate for the second point:";
    std::cin >> y2;
    
    Point point1(x1,y1);
    
    Point point2(x2, y2);
    
    std::cout << "Testing to use X(), or the getter function for point 1. The result is: " << point1.X() << std::endl;
    
    std::cout << "Testing to use Distance(), or the distance function from point 1 to origin. The result is: " << std::endl;
    std::cout << point1.Distance() << std::endl;
    
    std::cout << "Distance between the first point and the second point is: " << point1.Distance(point2)<< std::endl;
    
    return 0;
}

// We can see that we overload the functions successfully. We also test out the getter funciton and
// the distance function to the origin, making sure they both work.
