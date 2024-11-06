#include <iostream>
#include <vector>
#include <list>

// create template function
template <typename T>
// calculate the sum of a container with doubles
double Sum(const T& container) {
    double total = 0.0;
    typename T::const_iterator i;
    for (i = container.begin(); i != container.end(); ++i){
        total += *i;
    }
    return total;
}

// sum difference that calculates the sum between two iterators
template <typename Iterator>
double Sum(Iterator start, Iterator end) {
    double total = 0.0;
    for (Iterator i = start; i != end; ++i) {
        total += *i;
    }
    return total;
}


int main() {
    std::vector<double> vec = {1, 2, 3};
    std::list<double> lst = {1.1, 2.1, 3.1};

    std::cout << "Sum of vector: " << Sum(vec) << std::endl;
    std::cout << "Sum of list: " << Sum(lst) << std::endl;

    std::cout << "Partial sum of list: " << Sum(lst.begin(), ++(++lst.begin())) << std::endl;

    return 0;
}
