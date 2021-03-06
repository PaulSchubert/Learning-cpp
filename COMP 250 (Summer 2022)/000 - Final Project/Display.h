//
//  Display.h
//  Learning C++
//
//  Created by Paul-Frederik Schubert on 7/14/22.
//

#ifndef Display_h
#define Display_h

#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <iomanip>
#include "Selections.h"
#include "PopulateDisplay.h"
#include "ConvertInput.h"

#pragma once

class display: public convertInput{
public:
    
    //prints out the face terms along with letters and numbers for selection
void gameDisplay();
    
    
    //displaying field after the first selection
void updateDisplay(int x, int y);
    
    //resetting the display in case the two selections were incorrect
void resetDisplay();
    
    //after both inputs have come in... how to proceed
void turnComplete();
    
    //checking if the two selected terms were the same
int checkTerms();
    
    //lets user view two selected terms temporarily based on their difficulty selection at start
void pauseTime();
    
    //prints all the placed terms along with letters and numbers for selection - this is not actually a part of the game, just a testing condition for trouble shooting
void uncoveredDisplay();
    
protected:
    
    //the variables around the playing game for selection of a specific card & status + turns for game completion and printout of how many turns have passed respectively
    char lettersX[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int numbersY[8] = {1, 2, 3, 4, 5, 6, 7, 8}, status = 0, turns = 0;
};



#endif /* Display_h */
