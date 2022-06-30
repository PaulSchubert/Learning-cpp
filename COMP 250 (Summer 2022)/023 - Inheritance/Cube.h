//
//  Cube.h
//  023 - Inheritance
//
//  Created by Paul-Frederik Schubert on 6/30/22.
//

#ifndef Cube_h
#define Cube_h

#include <iostream>
#include "Square.h"

using namespace std;


class Cube : public Square{
public:
    Cube();
    Cube(double h, double w, double l);
    
    double getHeight();
    void setHeight(double h);
    double getVolume();
    
private:
    double height;
    
};

#endif /* Cube_h */
