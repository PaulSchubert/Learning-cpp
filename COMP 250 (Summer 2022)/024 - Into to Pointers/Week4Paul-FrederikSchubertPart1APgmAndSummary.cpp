//
//  main.cpp
//  024 - Into to Pointers
//
//  Created by Paul-Frederik Schubert on 7/5/22.
//

#include <iostream>

using namespace std;

int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 1A, Intro to Pointers - Date: 07/05/2022"<<endl<<endl;
    
    int fish = 5;
    
    // '&' is the address operator
    cout << &fish <<endl;
    
    int *ptrFishPointer;
    ptrFishPointer = &fish; //'fishPointer' is equal to the memory address of 'fish', but NOT its contents
    cout << ptrFishPointer <<endl;
    return 0;
}
