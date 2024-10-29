#include "array.hpp"
#include "point.hpp"
#include <iostream>

using namespace std;

int main() {
    try {
        Array<Point> points(3); // Create an array of Points

        points[0] = Point(1.0, 2.0);
        points[1] = Point(3.0, 4.0);
        points[2] = Point(5.0, 6.0);

        for (int i = 0; i < points.Size(); ++i) {
            cout << points[i].ToString() << endl;
        }

        cout << points[3].ToString() << endl; // Out of bounds access

    } catch (const std::out_of_range& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
