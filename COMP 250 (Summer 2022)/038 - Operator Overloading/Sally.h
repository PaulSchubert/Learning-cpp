//
//  Sally.h
//  Learning C++
//
//  Created by Paul-Frederik Schubert on 7/19/22.
//

#ifndef Sally_h
#define Sally_h

#include <iostream>

using namespace std;


class Sally{
public:
    int num;
    
    Sally();
    Sally(int);
    
    Sally operator+(Sally);
};


#endif /* Sally_h */
