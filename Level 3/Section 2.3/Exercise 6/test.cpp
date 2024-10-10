#include "circle.hpp"
#include <iostream>

int main() {
    Point center(3.0, 4.0);
    Circle c1(5.0, center);  // creates a circle

    std::cout << c1.ToString() << std::endl;
    
    std::cout << "Diameter: " << c1.Diameter() << std::endl;
    std::cout << "Area: " << c1.Area() << std::endl;
    std::cout << "Circumference: " << c1.Circumference() << std::endl;

    Circle c2 = c1;
    std::cout << "Copied circle: " << c2.ToString() << std::endl;

    return 0;
}
