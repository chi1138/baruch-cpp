#ifndef LESSTHAN_HPP
#define LESSTHAN_HPP

class LessThan {
private:
    double threshold;  // Threshold value for comparison

public:
    // Constructor to initialize the threshold
    LessThan(double threshold);

    // Overloaded function call operator
    bool operator()(double value) const;
};

// Global function that checks if a value is less than a specified threshold
bool isLessThan(double value, double threshold);

#endif  // LESSTHAN_HPP
