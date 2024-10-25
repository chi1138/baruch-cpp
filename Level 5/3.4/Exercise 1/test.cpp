#include "line.hpp"
#include "circle.hpp"
#include <iostream>

int main() {
    
    std::cout << "Creating the first line:" << std::endl;
//    Line l1;
    // There are two point constructor called and two point destructor called
    // so total of 4 point constructor called.
    // This is lower than the amount of constructor without using colon syntax.
    // So there is a performance enhance by using colon syntax.
    
    
    Point p1(3.9, 5.9);
    Point p2(12.3, 48.0);
    
    std::cout << "Creating the second line:" << std::endl;
    Line l2(p1,p2);
    
    std::cout << "Creating a circle: " << std::endl;
    Circle c1(0.5, p1);
    
    return 0;
}
