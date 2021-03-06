//
//  PopulateDisplay.h
//  000 - Final Project
//
//  Created by Paul-Frederik Schubert on 7/1/22.
//

#ifndef PopulateDisplay_h
#define PopulateDisplay_h

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <iomanip>
#include "Selections.h"
using namespace std;


class populateDisplay: public selections{
    
public:
    
    //getting the random terms and placing them into a hidden array
    void popDisplayTerms();
    
    //utilized for the random term population of the hidden array (termStatus and displayStatus)
    int checkTermStatus(int);
    void updateTermStatus(int);
    
    int checkDisplayStatus(int, int);
    void updateDisplayStatus(int, int);
    
    //the actual display!
    void printDisplay();
    
protected:
    //these variables are utilized for random term population as extra arrays exist to cross check wether a spot has been populater for efficiency (see implementation/source file for details)
    int termStatus[50] = {0}, random1, random2;
    int displayStatus[8][8] = {0};
    string displayTerms[8][8], tempTerm;
};

#endif /* PopulateDisplay_h */
