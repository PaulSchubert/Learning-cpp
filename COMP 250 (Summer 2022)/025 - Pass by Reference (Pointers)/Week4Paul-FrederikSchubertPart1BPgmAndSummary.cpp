//
//  main.cpp
//  025 - Pass by Reference (Pointers)
//
//  Created by Paul-Frederik Schubert on 7/5/22.
//

#include <iostream>

using namespace std;


void passByValue(int x);
void passByReference(int *x);


int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 1B, Pass by Reference (Pointers) - Date: 07/05/2022"<<endl<<endl;
    
    //when passing by reference you pass in the variables address - you essentially give direct access to the variables (usually we create a copy)
    //if used carefully this causes 'less stress' on your computer
    //**you pass the varaible itself, not a copy**
    
    int betty = 13;
    int sandy = 13;
    
    passByValue(betty);
    passByReference(&sandy); //need to pass in the address
    
    cout<<"Betty is now "<<betty<<endl;
    cout<<"Sandy is now "<<sandy<<endl;
    
    return 0;
}


void passByValue(int x){ //here we pass in a copy of the variable, 'x' is a copy
    x = 99;
    
};

void passByReference(int *x){ //'int pointer x'
    *x = 66; //here we directly pass the address into the function, and change the variable at its actual location instead of creating multiple copies
    
};
