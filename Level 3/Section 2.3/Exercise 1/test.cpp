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
    
    std::cout << "Distance between the first point and the second point is: " << point1.Distance(point2)<< std::endl;
    
    return 0;
}

// I observed that the amount of constructor called is the same as the destructor.
// Also, a copy constructor is called in the middle of the Distance calculation.
// This is because when we call Distance, the second point is passed by value to the function.
// This triggers the copy constructor to create a copy of p2 inside the Distance function.
