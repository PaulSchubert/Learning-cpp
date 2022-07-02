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
#include "Selections.h"
using namespace std;


class populateDisplay : public selections{
public:
    
    void popDisplayTerms();
    
    int checkTermStatus(int);
    void updateTermStatus(int);
    
    int checkDisplayStatus(int, int);
    void updateDisplayStatus(int, int);
    
protected:
    int termStatus[50] = {0};
    int displayStatus[8][8] = {0};
    string displayTerms[8][8];
};

#endif /* PopulateDisplay_h */
