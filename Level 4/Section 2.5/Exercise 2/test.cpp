#include "point.hpp"
#include <iostream>

using namespace std;

int main() {
    // create an array of Point pointers with 3 elements on the heap
    Point ** points = new Point*[3];
    
    // create a point for each element in the array
    points[0] = new Point(1.0, 1.0);
    points[1] = new Point(2.0, 2.0);
    points[2] = new Point(2.5, 3.0);
    
    // iterate the array and print each point
    cout << "The points in the array are: " << endl;
    for (int i = 0; i < 3; ++i){
        cout << *points[i] << endl;
    }
    
    // iterate the array to delete
    for (int i = 0; i<3; ++i){
        cout << "Point " << i << " is deleted!" << endl;
        delete points[i];
    }
    
    // delete the array
    delete [] points;
    
    return 0;
}
