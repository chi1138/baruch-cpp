#include "LessThan.hpp"

// Constructor to set the threshold
LessThan::LessThan(double threshold) : threshold(threshold) {}

// Overloaded operator() to check if a value is less than the threshold
bool LessThan::operator()(double value) const {
    return value < threshold;
}

// Global function that checks if a value is less than a specified threshold
bool isLessThan(double value, double threshold) {
    return value < threshold;
}
