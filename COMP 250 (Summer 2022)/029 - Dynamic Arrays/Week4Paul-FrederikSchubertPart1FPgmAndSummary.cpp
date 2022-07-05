//
//  main.cpp
//  029 - Dynamic Arrays
//
//  Created by Paul-Frederik Schubert on 7/5/22.
//

#include <iostream>

using namespace std;


const int CAPACITY = 1000;

int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 1F, Dynamic Arrays - Date: 07/05/2022"<<endl<<endl;
    
    int *ptrArray;
    ptrArray = new int[CAPACITY];
    
    ptrArray[0] = 3;
    ptrArray[1] = 7;
    ptrArray[2] = 2;
    ptrArray[3] = 9;
    
    cout<<"Array: \n";
    
    for(int i = 0; i < 4; i++){
        cout<<ptrArray[i]<<endl; //not using dereference operator for arrays, even though we have to use it to actually get what exists in the location otherwise
    }
    
    delete [] ptrArray; //leave brackets out if its not an array

    ptrArray = NULL; //good to have this, especially if more code follows - essentially does not point to anything anymore
    return 0;
}
