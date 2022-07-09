//
//  Selections.h
//  000 - Final Project
//
//  Created by Paul-Frederik Schubert on 6/30/22.
//

#ifndef Selections_h
#define Selections_h

#include <iostream>
#include <string>
using namespace std;

//levelSeed, groupSeed, wordSeed selection
class selections{
public:
    
    void chooseLevel();
    void chooseGroup();
    void chooseSpeed();
    void baseDisplayArray();
    void defineArraySize();
    
protected:
    string baseArray[50], chem[50], sport[50], cars[50];
    int wordSeed, levelSeed, speedSeed, displayArraySize;
};

#endif /* Selections_h */