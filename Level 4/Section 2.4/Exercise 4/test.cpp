#include "circle.hpp"
#include <iostream>

using namespace std;

int main() {
    Point p1(3.0, 4.0);
    Point p2(5.0, 6.0);

    // Test Point's << operator
    std::cout << "p1: " << p1 << std::endl;
    std::cout << "p2: " << p2 << std::endl;

    // Test Line's << operator
    Line l(p1, p2);
    std::cout << "Line: " << l << std::endl;

    return 0;
}
