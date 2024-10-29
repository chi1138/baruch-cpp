#include "point_array.hpp"
#include <iostream>

using namespace std;

int main() {
    // Create a PointArray with 3 points
    PointArray points(3);

    points[0] = Point(0.0, 0.0);
    points[1] = Point(3.0, 4.0);  // Distance from (0,0) to (3,4) = 5.0
    points[2] = Point(3.0, 4.0);  // Distance from (3,4) to (3,4)

    cout << "Total Length: " << points.Length() << endl; // output: Total Length: 5

    return 0;
}
