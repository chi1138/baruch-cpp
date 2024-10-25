#include "point.hpp"
#include <iostream>

int main() {
    // create point p1 and p2 for test
    Point p1(5.0, 7.9);
    Point p2(3.3, 1.8);
    Point p3(1.0 ,1.0);
    
    //test operators
    std::cout << "Negate of p1: " << (-p1).ToString() << std::endl; // negate
    std::cout << "p1 + p2 = " << (p1+p2).ToString() << std::endl;   // add coordinates
    std::cout << "p2 * 5 = " << (p2 * 5).ToString() << std::endl; // scale coordinates
    bool equal = (p1==p2);
    std::cout << "p1 == p2: " << (equal ? "true" : "false") << std::endl; // check equal
    
    Point p4;
    p4 = p1;
    std:: cout << "p4 = p1: " << p4.ToString() << std::endl; // assign new point
    
    p1 *= 5;
    std:: cout << "p1 after mutiplying by 5: " << p1.ToString() << std::endl; // multiply number

    return 0;
}
