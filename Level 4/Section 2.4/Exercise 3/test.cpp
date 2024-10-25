#include "circle.hpp"
#include <iostream>

using namespace std;

int main() {

    Point p(1.0, 1.0);
//    if (p==1.0) cout<<"Equal!"<<endl;
//    else cout<<"Not equal"<<endl;
    // the above code compiles as Point(double value) allows double type to implicit convert to point
    
    if (p==(Point)1.0) cout<<"Equal!"<<endl;
    
    return 0;
}
