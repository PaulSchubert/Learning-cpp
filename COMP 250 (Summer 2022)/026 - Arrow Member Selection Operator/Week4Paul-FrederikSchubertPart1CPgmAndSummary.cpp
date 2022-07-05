//
//  main.cpp
//  026 - Arrow Member Selection Operator
//
//  Created by Paul-Frederik Schubert on 7/5/22.
//

#include <iostream>
#include "Sally.h"
using namespace std;

int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 1C, Arrow Member Selection Operator (Pointers) - Date: 07/05/2022"<<endl<<endl;
    
    Sally sallyObject;
    Sally *ptrSally = &sallyObject; //we will be holding the 'Sally' datatype, as a class is a datatype we defined ourselves
    //here we have a pointer for the sallyObject
    // '*' to define variable which holds the address
    // '&' to get the address of a variable
    
    
    sallyObject.printCrap(); //accessing with an object
    ptrSally->printCrap(); //accessing with a pointer
    
    return 0;
}
