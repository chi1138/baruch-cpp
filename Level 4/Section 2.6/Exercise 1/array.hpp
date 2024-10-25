#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "point.hpp"

namespace YuChiWang {
    namespace Containers {
        class Array {
        private:
            CAD::Point* m_data; //data member for a dynamic C array of Point objects
            int m_size; // data member for the size of the array.
            
        public:
            //Constructors and destrcotor
            Array(); // defualt constructor
            Array(int size); // constructor with a size argument
            Array(const Array& other); // copy constructor
            ~Array(); //destructor
            
            // assignment operator
            Array& operator = (const Array& other);
            
            int Size() const; // get size of array
            void SetElement(int index, const CAD::Point& p); // sets an element
            CAD::Point& GetElement(int index); // get element

            CAD::Point& operator [] (int indez); // square bracket operator
            const CAD::Point& operator [] (int index) const; // const sqaure bracket operator
        };
    }
}

#endif
