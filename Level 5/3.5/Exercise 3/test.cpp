#include "shape.hpp"
#include "point.hpp"
#include "line.hpp"
#include <iostream>

using namespace std;

int main() {
    Shape* shapes[3];
    shapes[0]=new Shape;
    shapes[1]=new Point;
    shapes[2]=new Line;

    for (int i=0; i!=3; i++) delete shapes[i];

    // Without using the Virtual destructor only the base class's destructor
    // will be called when deleting objects using base class pointers.
    // after including the virtual destructor in the base class the correct
    // destructors are called now.
    
    return 0;
}
