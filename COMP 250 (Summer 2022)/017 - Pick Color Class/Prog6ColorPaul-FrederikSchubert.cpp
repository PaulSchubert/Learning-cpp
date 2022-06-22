//
//  main.cpp
//  017 - Pick Color Class
//
//  Created by Paul-Frederik Schubert on 6/21/22.
//

#include <iostream>
#include <string>
//#include <stdlib.h>
#include <ctime>
#include <cstdlib>

using namespace std;

class colorPicker{
public:
    colorPicker(){
        setColor(0, "red");
        setColor(1, "orange");
        setColor(2, "yellow");
        setColor(3, "green");
        setColor(4, "blue");
        setColor(5, "indigo");
        setColor(6, "violet");
    }
    
    void getColors(){
        for(int i = 0; i < 7; i++){
            cout<<colors[i];
            
            while(i < 6){
                cout<<", ";
                break;
            }
            if(i == 6){
                cout<<endl<<endl;
            }
        }
    }
    
    void getColor(){
        srand ((unsigned) time(NULL));
        int randomNum = rand() % 7;
        
        cout<<randomNum<<colors[randomNum]<<endl<<endl;
    }
    
    
    
private:
    string colors[7];
    //int randomNum;
    
    void setColor(int index, string color){
        colors[index] = color;
    }
};


int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Program 6, Color Picker - Date: 06/21/2022"<<endl<<endl;
    
    colorPicker cP;
    cP.getColors();
    cP.getColor();
    
    return 0;
}
