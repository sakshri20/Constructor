//
//  Area.hpp
//  Constructor
//
//  Created by Sakshi Shrivastava on 8/22/17.
//

#ifndef Area_hpp
#define Area_hpp

#include <stdio.h>
#include <iostream>

class Area {
public:
    double length, width, area, radius;
    void calculateArea(double);
    Area();    // Default constructor
    Area(double len);  // Parameterized constructor
    
    
};

#endif /* Area_hpp */
