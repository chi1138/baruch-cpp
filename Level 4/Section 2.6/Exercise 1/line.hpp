#ifndef Line_HPP
#define Line_HPP

#include <iostream>
#include "point.hpp" // include header file to call point

namespace YuChiWang {
    namespace CAD {

        class Line {
        private:
            Point startpoint;
            Point endpoint;
            
        public:
            // Constructors and destructor
            Line();  // Defualt Constructor
            Line(const Point& start, const Point& end);  // Constructor with start- and end-point
            Line(const Line& l); // Copy Constructor
            ~Line();
            
            // Getter and setter functions
            Point Start() const;
            Point End() const;
            void Start(const Point& p);
            void End(const Point& p);
            
            // Function to calculate the length of the line
            double Length() const;
            
            // Convert line to string
            std::string ToString() const;
            
            Line& operator = (const Line& source); // assign operator
            
            friend std::ostream& operator << (std::ostream& output, const Line& l);
        };
    }
}


#endif
