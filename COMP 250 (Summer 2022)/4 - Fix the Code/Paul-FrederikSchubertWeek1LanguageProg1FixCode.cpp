//
//  main.cpp
//  4 - Fix the Code
//
//  Created by Paul-Frederik Schubert on 6/14/22.
//

#include <iostream> //added 'include' and '<'
using namespace std; //moved to one line

int main(){ //lowercase 'i' and opening brackets
    cout<<"Paul-Frederik Schubert - 14 June 2022"<<endl<<endl; //required first line
    
    //declare and initialize variables
    int height = 0, feet = 0, inches = 0; //moved together on one line ('int' before height & lowercase 'i')
    
    //prompt for height
    cout<<"Enter your height in inches: "; //switched to '<<' for printout, remained consistent with quotation marks
    cin>>height; //proper '>>' for input, got rid of excess character
    
    //calculations
    feet = height/12; //variable's value being changed on left, expression on the right
    inches = height % 12;
    
    //printout
    cout<<"You are "<<feet<<" feet and "<<inches<<" inches tall."<<endl; //fixed grammar errors and '<<'
    //system("pause") <- not needed
    return 0;
} //end of program
