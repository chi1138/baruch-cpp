#include <iostream>
#include <vector>
#include <algorithm>
#include "lessthan.hpp"

int main() {
    // Define a vector of doubles
    std::vector<double> numbers = {1.5, 3.0, 2.5, 4.0, 5.5, 2.0};

    // 1. Using the global function with a specified threshold
    double threshold = 3.0;
    int countGlobal = std::count_if(numbers.begin(), numbers.end(),
                                    [threshold](double value) { return isLessThan(value, threshold); });
    std::cout << "Count of elements less than " << threshold << " using global function: " << countGlobal << std::endl;

    // 2. Using the functor with a custom threshold
    LessThan lessThanFunctor(threshold);
    int countFunctor = std::count_if(numbers.begin(), numbers.end(), lessThanFunctor);
    std::cout << "Count of elements less than " << threshold << " using functor: " << countFunctor << std::endl;

    return 0;
}
