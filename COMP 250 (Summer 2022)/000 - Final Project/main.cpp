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
using namespace std;



class printDisplay : public populateDisplay{
public:
    
    void coveredDisplay(){
        
        for(int i = 0; i < displayArraySize; i++){
            for(int j = 0; j < displayArraySize; j++){
                cout<<setfill(' ')<<setw(11)<<baseArray;
            }
            cout<<endl;
        }
    }
    
    void uncoveredDisplay(){
        for(int i = 0; i < displayArraySize; i++){
            for(int j = 0; j < displayArraySize; j++){
                cout<<setfill(' ')<<setw(11)<<displayTerms[j][i];
            }
            cout<<endl;
        }
    }
    
protected:
    
};


class memoryMatchGame : public printDisplay{
public:
    
    void start(){
        
        basicSelect();
        popDisplayTerms();
        
        coveredDisplay();
        uncoveredDisplay();
        //printDisplay();
    }
    
    void basicSelect(){
        chooseGroup();
        chooseLevel();
        chooseSpeed();
    }
};





int main(){
    cout<<"Paul-Frederik Schubert - Final Project (Memory Game)"<<endl<<endl;
    
    
    memoryMatchGame game1;
    game1.start();
    
    return 0;
}
