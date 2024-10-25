#include "circle.hpp"
#include <iostream>

int main() {
    // create point p1 and p2 for test
    Point p1(5.0, 7.9);
    Point p2(3.3, 1.8);
    Point p3(1.0 ,1.0);
    
    //print via ostream operator for point
    std::cout << "Negate of p1: " << -p1 << std::endl; // negate
    std::cout << "p1 + p2 = " << p1+p2 << std::endl;   // add coordinates
    std::cout << "p2 * 5 = " << (p2 * 5) << std::endl; // scale coordinates

    //print via ostream operator for line
    Line l1(p1, p2);
    std::cout << "Line: " << l1 << std::endl;

    //print via ostream operator for circle
    Circle c1(2.0, p1);
    std::cout << "Circle: " << c1 << std::endl;
    
    return 0;
}
