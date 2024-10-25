#include "array.hpp"
#include "point.hpp"
#include "circle.hpp"
#include "line.hpp"
#include <iostream>

namespace CAD = YuChiWang::CAD;
namespace Containers = YuChiWang::Containers;

int main() {
    // test point class
    std::cout << "Point class:" <<std::endl;
    CAD::Point p1(2.3,4.5);
    CAD::Point p2(3.1, 9.3);
    std::cout << "Point 1 = " << p1 << std::endl;
    std::cout << "Point 2 = " << p2 << std::endl;
    std::cout << "Distance between p1 and p2 = " << p1.Distance(p2) << std::endl;
    std::cout << std::endl;

    
    // test line class
    std::cout << "Line class:" << std::endl;
    CAD::Line line(p1, p2);
    std::cout << "Line = " << line << std::endl;
    std::cout << "Length of the line = " << line.Length() << std::endl;
    std::cout << std::endl;

    // test array class
    std::cout << "Testing Array class:" << std::endl;
    Containers::Array arr(3);  // array of 3 points
    // set elements
    arr.SetElement(0, CAD::Point(5.0, 6.0));
    arr.SetElement(1, CAD::Point(7.0, 8.0));
    arr.SetElement(2, CAD::Point(9.0, 10.0));

    // print using [] operator
    std::cout << "Array elements:" << std::endl;
    for (int i = 0; i < arr.Size(); ++i) {
        std::cout << arr[i] << std::endl;
    }
    std::cout << std::endl;


    // test circle class
    std::cout << "Circle class:" << std::endl;
    CAD::Circle circle(5.0, CAD::Point(0.0, 0.0));
    std::cout << circle << std::endl;
    std::cout << "Diameter = " << circle.Diameter() << std::endl;
    std::cout << "Area = " << circle.Area() << std::endl;
    std::cout << "Circumference = " << circle.Circumference() << std::endl;
    std::cout << std::endl;

    
    return 0;
}

