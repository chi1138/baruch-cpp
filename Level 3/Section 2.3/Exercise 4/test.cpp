#include "point.hpp"
#include <iostream>

int main(){
    double x1, x2, y1, y2;
    
    const Point cp(1.5, 3.9);
    // cp.X(0.3);
    // this returns error:
    // Candidate function not viable: 'this' argument has type 'const Point', but method is not marked const
    
    // As we set the getter function to const, there will be no 
    std::cout << cp.X() << std::endl;
    std::cout << cp.Y() << std::endl;
    
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
    
    std::cout << "Distance between the first point and the second point is: " << point1.Distance(point2)<< std::endl;
    
    return 0;
}
