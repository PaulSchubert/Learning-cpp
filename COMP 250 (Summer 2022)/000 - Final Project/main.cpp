//
//  main.cpp
//  000 - Final Project
//
//  Created by Paul-Frederik Schubert on 6/30/22.
//

//trendsetter

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


int main(){
    cout<<"Paul-Frederik Schubert - Final Project (Memory Game)"<<endl<<endl;
    
    
    memoryMatchGame game1;
    game1.start();
    
    return 0;
}
