//
//  Colors.h
//  022 - Modifying the Program
//
//  Created by Paul-Frederik Schubert on 6/29/22.
//

#ifndef Colors_h
#define Colors_h

#include <iostream>
#include <string>

/* srand example */
#include <ctime>
#include <stdio.h>      /* NULL */
#include <stdlib.h>     /* srand, rand */

#pragma once
using namespace std;



class colorPicker{
public:
    colorPicker();
    void printAllColors();
    string randomColor();
private:
    string colorArray[7];
};

#endif /* Colors_h */
