#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <string>

int main() {
    // Part 1: Create a list of doubles and add some data
    std::list<double> doubleList = {1.3, 4.2, 45.6, 69.96};
    doubleList.push_back(5.3); // add data using back
    
    
    // access the first and last element of the list
    std::cout << "First in list: " << doubleList.front() << std::endl;
    std::cout << "Last in list: " << doubleList.back() << std::endl;
    
    // Part 2: Create vector of doubles and add some data
    std::vector<double> doubleVector = {10.2, 30, 9.2};
    doubleVector.push_back(9.2);
    doubleVector.push_back(1.2);
    
    // Use the index operator to access elements
    std::cout << "Vector at index 0: " << doubleVector[0] << std::endl;
    std::cout << "Vector at index 4" << doubleVector[4] << std::endl;
    
    // Part 3: Create a map that strings to doubles
    std::map<std::string, double> stringtodoubleMap;
    stringtodoubleMap["a"] = 10;
    stringtodoubleMap["b"] = 20;
    stringtodoubleMap["c"] = 30;
    
    std::cout << "map value for key 'a': " << stringtodoubleMap["a"] << std::endl;
    
    
    return 0;
}

