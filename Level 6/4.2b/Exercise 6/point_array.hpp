#ifndef POINT_ARRAY_HPP
#define POINT_ARRAY_HPP

#include "array.hpp"
#include "point.hpp"

class PointArray : public Array<Point> {
public:
    // constructor and destructor
    PointArray();
    PointArray(int size);
    PointArray(const PointArray& other);
    ~PointArray();

    // Assignment Operator
    PointArray& operator=(const PointArray& other);

    // Calculate the total length between points in the array
    double Length() const;
};

#endif
