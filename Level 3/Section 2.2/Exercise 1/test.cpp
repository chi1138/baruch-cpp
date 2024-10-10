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

    return 0;
}
