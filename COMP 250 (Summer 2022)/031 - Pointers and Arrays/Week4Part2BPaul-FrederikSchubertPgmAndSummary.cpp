//
//  main.cpp
//  031 - Pointers and Arrays
//
//  Created by Paul-Frederik Schubert on 7/7/22.
//

#include <iostream>

using namespace std;

int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 2B, Pointers, Pointers and Arrays - Date: 07/07/2022"<<endl<<endl;
    
    int *ptrIntArray, *ptrCopyIntArray;
    
    ptrIntArray = new int [100];
    
    //Filling intArray, and cout'ing it
    for(int i = 0; i < 100; i++){
        ptrIntArray[i] = i;
    }
    for(int i = 0; i < 100; i++){
        cout<<ptrIntArray[i]<<" ";
    }
    
    cout<<endl<<endl;
    ptrCopyIntArray = ptrIntArray;
    
    for(int i = 0; i < 100; i++){
        cout<<ptrCopyIntArray[i]<<" ";
    }
    
    cout<<endl<<endl;
    
    delete ptrIntArray;
    
    //no need to delete contents of second pointer as the point to the same place
    //delete ptrCopyIntArray;
    
    return 0;
}
