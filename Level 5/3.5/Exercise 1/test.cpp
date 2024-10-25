#include "point.hpp"
#include "line.hpp"
#include <iostream>

using namespace std;

int main() {
    
    Shape s;// Create shape.
    Point p(10, 20);// Create point.
    Line l(Point(1,2), Point(3, 4)); // Create line.
    
    cout<<s.ToString()<<endl;// Print shape.
    cout<<p.ToString()<<endl;// Print point.
    cout<<l.ToString()<<endl;// Print line
    
    cout<<"Shape ID: "<<s.ID()<<endl; // ID of the shape.
    cout<<"Point ID: "<<p.ID()<<endl; // ID of the point. Does this work? A: Yes
    cout<<"Line ID: "<<l.ID()<<endl; // ID of the line. Does this work? A: Yes
    
    Shape* sp; // Create pointer to a shape variable.
    sp=&p; // Point in a shape variable.
    
    cout<<sp->ToString()<<endl;// What is printed?
    // We note that the ToString function of the point is called.

    return 0;
}
