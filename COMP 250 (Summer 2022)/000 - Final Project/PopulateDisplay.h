//
//  PopulateDisplay.h
//  000 - Final Project
//
//  Created by Paul-Frederik Schubert on 7/1/22.
//

#ifndef PopulateDisplay_h
#define PopulateDisplay_h
#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <iomanip>
#include "Selections.h"
using namespace std;


class populateDisplay : public selections{
public:
    
    void popDisplayTerms();
    
    int checkTermStatus(int);
    void updateTermStatus(int);
    
    int checkDisplayStatus(int, int);
    void updateDisplayStatus(int, int);
    
    void printDisplay();
    
protected:
    int termStatus[50] = {0}, random1, random2;
    int displayStatus[8][8] = {0};
    string displayTerms[8][8], tempTerm;
};

#endif /* PopulateDisplay_h */
