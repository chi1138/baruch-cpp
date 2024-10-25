#include "point.hpp"
#include "line.hpp"
#include "circle.hpp"
#include <iostream>

using namespace std;

int main() {
//    Shape s;
    // we receive compile error as 'shape' is an abstract class
    
    // Create an array of Shape pointers
    Shape* shapes[3];
    shapes[0] = new Point(1.0, 2.0);
    shapes[1] = new Line;
    shapes[2] = new Circle;

    // Call Draw() for each shape
    for (int i = 0; i < 3; ++i) {
        shapes[i]->Draw();
    }

    return 0;
}
