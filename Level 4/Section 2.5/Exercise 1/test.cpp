#include "point.hpp"
#include <iostream>

using namespace std;

int main() {
    // create on heap using default constructor
    Point* p1 = new Point();
    
    // create on heap using constructor with coordinates
    Point* p2 = new Point(1.3, 4.9);
    Point* p3 = new Point(1.2, 4.8);
    
    // create on heap using copy constructor
    Point* p4 = new Point(*p2);
    
    // print out the points
    cout << "p1 is: " << *p1 << endl;
    cout << "p4 is: " << *p4 << endl;

    // testing with the distance function
    cout << "The distance between p2 and p1 is:" << p2 -> Distance(*p3) << endl;
    
    // clean up
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    // requesting user for an array:
    int size;
    
    cout << "Please enter your desired array size: " ;
    cin >> size;
        
    Point* points = new Point[size];
    
    // remeber to add []
    delete[] points;
    
    return 0;
}
