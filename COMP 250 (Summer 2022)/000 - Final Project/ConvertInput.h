//
//  ConvertInput.h
//  Learning C++
//
//  Created by Paul-Frederik Schubert on 7/14/22.
//

#ifndef ConvertInput_h
#define ConvertInput_h

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <iomanip>
#include "Selections.h"
#include "PopulateDisplay.h"

using namespace std;



class convertInput : public populateDisplay{
public:
    
    //USER INPUT FOR first and second card to flip, also converts to X and Y for usage with array
    void firstSelected();
    
    //second selection
    void secondSelected();
    
    //converting char to int from selections input
    int convertSelectChar(string select);
    
    //converting second int of input to usable int
    int convertSelectInt(string select);
    

protected:
    string selection;
    int selected1X, selected1Y, selected2X, selected2Y;
};



#endif /* ConvertInput_h */
