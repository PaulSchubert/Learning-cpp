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
    
    
    //resetting the display in case the two selections were incorrect
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
    
    //after both inputs have come in... how to proceed
    void turnComplete(){
        if(checkTerms() == 0){
            resetDisplay();
            cout<<endl<<endl<<"Sorry, that's incorrect"<<endl<<endl;
        }
        else{
            cout<<endl<<endl<<"Correct!"<<endl<<endl;
        }
    }
    
    //checking if the two selected terms were the same
    int checkTerms(){
        if(displayTerms[selected1X][selected1Y] == displayTerms[selected2X][selected2Y]){
            return 1;
        }
        else{
            return 0;
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
        
        
        for(int i = 0; i < 3; i++){
            gameDisplay();
            firstSelected();
            updateDisplay(selected1X, selected1Y);
            gameDisplay();
            secondSelected();
            updateDisplay(selected2X, selected2Y);
            gameDisplay();
            turnComplete();
        }
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
