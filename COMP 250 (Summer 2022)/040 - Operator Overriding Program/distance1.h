//
//  distance1.h
//  Learning C++
//
//  Created by Paul-Frederik Schubert on 7/20/22.
//

#ifndef distance1_h
#define distance1_h

#include <iostream>

using namespace std;


class distance1{
public:
    //constructors
    distance1();
    distance1(int y, int f, float i);
    
    //setter
    void setDist(int y, int f, float i);
    
    //overloaded operators
    distance1 operator+(distance1 other);
    distance1 operator-(distance1 other);
    
    bool operator==(distance1 other);
    bool operator<(distance1 other);
    bool operator>(distance1 other);
    
    
    int yards, feet;
    float inches;
};


#endif /* distance1_h */
