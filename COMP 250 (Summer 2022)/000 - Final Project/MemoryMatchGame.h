//
//  MemoryMatchGame.h
//  Learning C++
//
//  Created by Paul-Frederik Schubert on 7/14/22.
//

#ifndef MemoryMatchGame_h
#define MemoryMatchGame_h

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <iomanip>
#include "Selections.h"
#include "PopulateDisplay.h"
#include "ConvertInput.h"
#include "Display.h"
#include "MemoryMatchGame.h"
using namespace std;


class memoryMatchGame : public display{
public:
    
    //the process with starting and then loop for primary game
    void start();
    
    //just calls up the first three functions for selection
    void basicSelect();
    
    
protected:
    int sec = 0, min = 0, hour = 0;
};

#endif /* MemoryMatchGame_h */
