//
//  Selections.h
//  000 - Final Project
//
//  Created by Paul-Frederik Schubert on 6/30/22.
//

#ifndef Selections_h
#define Selections_h

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <iomanip>
using namespace std;

//levelSeed, groupSeed, wordSeed selection
class selections{
public:
    
    //names are exactly what they are, include interface and one input each (some call functions within to set up game)
    void chooseLevel();
    void chooseGroup();
    void chooseSpeed();
    
    //what game and size have you chosen? - these are called within the 'chose' functions and define variables to be used in later functions through inheritance
    void baseDisplayArray();
    void defineArraySize();
    
protected:
    //all the possible terms the user may receive
    string baseArray[8][8], chosenTerms[50], chem[50] = {"Argon", "Arsenic", "Barium", "Bismuth", "Bohrium", "Boron", "Calcium", "Carbon", "Cerium", "Cesium", "Chlorine", "Cobalt", "Copper", "Gold", "Hassium", "Helium", "Hydrogen", "Iodine", "Iridium", "Iron", "Lead", "Lithium", "Gallium", "Vanadium", "Neon", "Nickel", "Nirogen", "Osmium", "Oxygen", "Indium", "Mercury", "Astatine", "Radium", "Radon", "Silicon", "Silver", "Sodium", "Suflur", "Tin", "Titanium", "Xenon", "Zinc", "Uranium", "Yttrium", "Francium", "Tungsten", "Thulium", "Thallium", "Thorium", "Curium"}, sport[50] = {"Flyers", "Blazers", "Senators", "Saints", "Buckeyes", "Flames", "Rangers", "Hawks", "Eagles", "Rangers", "Chelsea", "Giants", "Braves", "Jazz", "Miami", "Patriots", "Angles", "Trojans", "Thunder", "Munich", "Bulls", "Boston", "TarHeels", "Jets", "Crimson", "Milan", "Bears", "Heat", "Wildcats", "Irish", "Celtics", "49ers", "Devils", "Leafs", "Knicks", "Chicago", "Berlin", "Phillies", "Steelers", "Arsenal", "NY", "Wings", "Sox", "Tampa", "Cowboys", "Packers", "Madrid", "Lakers", "Yankees", "United"}, cars[50] = {"Mega", "Valkyrie", "Beetle", "Gremlin", "Torch", "Stealth", "Syclone", "Typhoon", "Raptor", "Senna", "Race", "Spitfire", "Legend", "Vanquish", "Demon", "Stratos", "Pacer", "Mustang", "Volante", "Javelin", "Burner", "Corvette", "Mangusta", "Magnum", "Rampage", "Viper", "Talon", "Scorch", "Hornet", "Smoke", "Countach", "Diablo", "Defender", "Marauder", "Raider", "Cutlass", "Toronado", "Wave", "Prowler", "Firebird", "Carrera", "Dictator", "Hawk", "Phantom", "Cobra", "Hammer", "Vector", "Venom", "Stingray", "Fast"};
    
    //seed values, and displayArraySize which is dependant on levelSeed
    int wordSeed, levelSeed, speedSeed, displayArraySize;
};

#endif /* Selections_h */
