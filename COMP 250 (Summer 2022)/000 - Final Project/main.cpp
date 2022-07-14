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
using namespace std;



class display: public convertInput{
public:
    //prints out the face terms along with letters and numbers for selection
    void gameDisplay(){
        for(int i = 0; i < displayArraySize; i++){
            cout<<setfill(' ')<<setw(14)<<lettersX[i];
        }
    
        for(int i = 0; i < displayArraySize; i++){
            cout<<endl<<numbersY[i];
            for(int j = 0; j < displayArraySize; j++){
                cout<<setfill(' ')<<setw(14)<<baseArray[j][i];
            }
            cout<<endl;
        }
    }
    
    
    //displaying field after the first selection
    
    void updateDisplay(int x, int y){
        baseArray[x][y] = displayTerms[x][y];
        
    }
    
    void resetDisplay(){
        if(wordSeed == 1){
            baseArray[selected1X][selected1Y] = "chem";
            baseArray[selected2X][selected2Y] = "chem";
        }
        else if(wordSeed == 2){
            baseArray[selected1X][selected1Y] = "sports";
            baseArray[selected2X][selected2Y] = "sports";
        }
        else if(wordSeed == 3){
            baseArray[selected1X][selected1Y] = "cars";
            baseArray[selected2X][selected2Y] = "cars";
        }
    }
    
    
    //prints all the placed terms along with letters and numbers for selection
void uncoveredDisplay(){
    for(int i = 0; i < displayArraySize; i++){
        cout<<setfill(' ')<<setw(14)<<lettersX[i];
    }
    
    for(int i = 0; i < displayArraySize; i++){
        cout<<endl<<numbersY[i];
        for(int j = 0; j < displayArraySize; j++){
            cout<<setfill(' ')<<setw(14)<<displayTerms[j][i];
        }
        cout<<endl;
    }
}
    
protected:
    char lettersX[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int numbersY[8] = {1, 2, 3, 4, 5, 6, 7, 8};
};



class memoryMatchGame : public display{
public:
    
    void start(){
        
        basicSelect();
        popDisplayTerms();
        
        gameDisplay();
        firstSelected();
        updateDisplay(selected1X, selected1Y);
        gameDisplay();
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
