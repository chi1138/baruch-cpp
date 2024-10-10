#include "line.hpp"
#include "point.hpp"

#include <iostream>

int main() {
    // Input coordinates for the first point
    double x1, y1, x2, y2;
    std::cout << "Enter the x-coordinate for the start point: ";
    std::cin >> x1;
    std::cout << "Enter the y-coordinate for the start point: ";
    std::cin >> y1;

    // Input coordinates for the second point
    std::cout << "Enter the x-coordinate for the end point: ";
    std::cin >> x2;
    std::cout << "Enter the y-coordinate for the end point: ";
    std::cin >> y2;

    // Create Point objects for start and end
    Point start(x1, y1);
    Point end(x2, y2);

    // Create a Line object using the constructor
    Line line(start, end);

    // Print the description of the line and its length
    std::cout << line.ToString() << std::endl;
    std::cout << "The length of the line is: " << line.Length() << std::endl;

    return 0;
}
