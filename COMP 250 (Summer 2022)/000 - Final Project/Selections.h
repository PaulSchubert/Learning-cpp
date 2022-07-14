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
    
    void chooseLevel();
    void chooseGroup();
    void chooseSpeed();
    void baseDisplayArray();
    void defineArraySize();
    
protected:
    string baseArray[8][8], chosenTerms[50], chem[50] = {"Argon", "Arsenic", "Barium", "Bismuth", "Bohrium", "Boron", "Calcium", "Carbon", "Cerium", "Cesium", "Chlorine", "Cobalt", "Copper", "Gold", "Hassium", "Helium", "Hydrogen", "Iodine", "Iridium", "Iron", "Lead", "Lithium", "Gallium", "Manganese", "Neon", "Nickel", "Nirogen", "Osmium", "Oxygen", "Phosphorus", "Plutonium", "Potassium", "Radium", "Radon", "Silicon", "Silver", "Sodium", "Suflur", "Tin", "Titanium", "Xenon", "Zinc", "Uranium", "Yttrium", "Zirconium", "Tungsten", "Thulium", "Thallium", "Strontium", "Seaborgium"}, sport[50] = {"Flyers", "Trailblazers", "Senators", "Saints", "Buckeyes", "Flames", "Rangers", "Blackhawks", "Eagles", "Rangers", "Chelsea", "Giants", "Braves", "Mavericks", "Cardinals", "Patriots", "Angles", "Trojans", "Liverpool", "Munich", "Bulls", "Longhorns", "TarHeels", "Jets", "Crimson", "Milan", "Bears", "Heat", "Wildcats", "Irish", "Celtics", "49ers", "BlueDevils", "Leafs", "Knicks", "Canadiens", "Barcelona", "Phillies", "Steelers", "Arsenal", "NY", "Wings", "Sox", "Wolverines", "Cowboys", "Packers", "Madrid", "Lakers", "Yankees", "United"}, cars[50] = {"Mega", "Valkyrie", "Beetle", "Gremlin", "Gladiator", "Stealth", "Syclone", "Typhoon", "Raptor", "Senna", "Superbird", "Spitfire", "Legend", "Vanquish", "Demon", "Stratos", "Superfast", "Mustang", "Volante", "Javelin", "Roadmaster", "Corvette", "Mangusta", "Magnum", "Rampage", "Viper", "Talon", "Testarossa", "Hornet", "Interceptor", "Countach", "Diablo", "Defender", "Marauder", "Raider", "Cutlass", "Toronado", "Esperante", "Prowler", "Firebird", "Carrera", "Dictator", "Hawk", "Phantom", "Cobra", "Hammer", "Vector", "Venom", "Stingray", "Lightning"};
    int wordSeed, levelSeed, speedSeed, displayArraySize;
};

#endif /* Selections_h */
