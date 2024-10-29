#include "point_array.hpp"
#include <cmath>

// constructor and destructor
PointArray::PointArray() : Array<Point>() {}

// Constructor with size
PointArray::PointArray(int size) : Array<Point>(size) {}

// copy Constructor
PointArray::PointArray(const PointArray& other) : Array<Point>(other) {}

// Assignment Operator
PointArray& PointArray::operator=(const PointArray& other) {
    if (this != &other) {
        Array<Point>::operator=(other);
    }
    return *this;
}

// destructor
PointArray::~PointArray() {}

// Length function
double PointArray::Length() const {
    double totalLength = 0.0;
    for (int i = 1; i < Size(); ++i) {
        totalLength += (*this)[i - 1].Distance((*this)[i]);
    }
    return totalLength;
}
