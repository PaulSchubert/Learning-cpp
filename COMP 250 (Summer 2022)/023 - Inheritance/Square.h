//
//  Square.h
//  023 - Inheritance
//
//  Created by Paul-Frederik Schubert on 6/30/22.
//

#ifndef Square_h
#define Square_h
#include <iostream>

using namespace std;


class Square{
public:
    //constructors
    Square();
    Square(double w, double l);
    
    //set functions
    void setWidth(double w);
    void setLength(double l);
    
    //get functions
    double getWidth();
    double getLength();
    double getArea();
    
private:
    double length, width;
};


#endif /* Square_h */
