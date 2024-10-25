#include "shape.hpp"
#include <sstream>

// Default constructor
Shape::Shape() : m_id(rand()){
    std::cout << "Shape created with random id: " << m_id << std::endl;
}

// Copy constructor
Shape::Shape(const Shape& other) : m_id(other.m_id){
    std::cout << "Shape copied with id: " << m_id << std::endl;
}

// Assignment operator
Shape& Shape::operator=(const Shape &other){
    if (this != &other){
        m_id = other.m_id;
    }
    return *this;
}

// Destructor
Shape::~Shape(){
    std::cout << "Shape with ID" << m_id << " is deleted." << std::endl;
}

// Getter for id
int Shape::ID() const{
    return m_id;
}

// ToString
std::string Shape::ToString() const{
    std::stringstream ss;
    ss << "(Shape ID: " << m_id << ")";
    return ss.str();
}
