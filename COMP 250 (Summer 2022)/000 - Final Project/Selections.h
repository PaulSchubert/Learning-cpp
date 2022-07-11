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
#include <cstdlib>
#include <unistd.h>
#include <iomanip>
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
    string baseArray, chosenTerms[50], chem[50] = {"Argon", "Arsenic", "Barium", "Bismuth", "Bohrium", "Boron", "Calcium", "Carbon", "Cerium", "Cesium", "Chlorine", "Cobalt", "Copper", "Gold", "Hassium", "Helium", "Hydrogen", "Iodine", "Iridium", "Iron", "Lead", "Lithium", "Magnesium", "Manganese", "Neon", "Nickel", "Nirogen", "Osmium", "Oxygen", "Phosphorus", "Plutonium", "Potassium", "Radium", "Radon", "Silicon", "Silver", "Sodium", "Suflur", "Tin", "Titanium", "Xenon", "Zinc", "Uranium", "Yttrium", "Zirconium", "Tungsten", "Thulium", "Thallium", "Strontium", "Seaborgium"}, sport[50], cars[50];
    int wordSeed, levelSeed, speedSeed, displayArraySize;
};

#endif /* Selections_h */
